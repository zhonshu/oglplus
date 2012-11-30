/**
 *  @file oglplus/shapes/wrapper.hpp
 *  @brief Wrapper managing VAOs, VBOs and instructions used to render a shape
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_SHAPES_WRAPPER_1202020923_HPP
#define OGLPLUS_SHAPES_WRAPPER_1202020923_HPP

#include <oglplus/vertex_array.hpp>
#include <oglplus/vertex_attrib.hpp>
#include <oglplus/buffer.hpp>
#include <oglplus/array.hpp>
#include <oglplus/program.hpp>
#include <oglplus/context.hpp>
#include <oglplus/error.hpp>
#include <oglplus/string.hpp>

#include <oglplus/shapes/draw.hpp>
#include <oglplus/shapes/vert_attr_info.hpp>

#include <vector>
#include <functional>
#include <iterator>
#include <cassert>

namespace oglplus {
namespace shapes {

/// Wraps instructions and VAO+VBOs used to render a shape built by a ShapeBuilder
class ShapeWrapperBase
{
protected:
	FaceOrientation _face_winding;
	// helper object encapsulating shape drawing instructions
	shapes::DrawingInstructions _shape_instr;

	// index type properties
	shapes::ElementIndexInfo _index_info;

	Context _gl;

	// A vertex array object for the rendered shape
	Optional<VertexArray> _vao;

	// VBOs for the shape's vertex attributes
	Array<Buffer> _vbos;

	// numbers of values per vertex for the individual attributes
	std::vector<GLuint> _npvs;

	// names of the individual vertex attributes
	std::vector<String> _names;

	template <class ShapeBuilder, typename Iterator>
	void _init(const ShapeBuilder& builder, Iterator name, Iterator end)
	{
		VertexArray::Unbind();
		typename ShapeBuilder::VertexAttribs vert_attr_info;
		unsigned i = 0;
		std::vector<GLfloat> data;
		while(name != end)
		{
			auto getter = vert_attr_info.VertexAttribGetter(
				data,
				*name
			);
			if(getter != nullptr)
			{
				// bind the VBO for the vertex attribute
				_vbos[i].Bind(Buffer::Target::Array);
				_npvs[i] = getter(builder, data);
				_names[i] = *name;
				// upload the data
				Buffer::Data(Buffer::Target::Array, data);
			}
			++name;
			++i;
		}
		auto shape_indices = builder.Indices();
		if(!shape_indices.empty())
		{
			assert((i+1) == _npvs.size());
			assert((i+1) == _vbos.size());

			_npvs[i] = 1;
			_vbos[i].Bind(Buffer::Target::ElementArray);
			Buffer::Data(
				Buffer::Target::ElementArray,
				shape_indices
			);
		}
	}
public:
	template <typename Iterator, class ShapeBuilder>
	ShapeWrapperBase(
		Iterator names_begin,
		Iterator names_end,
		const ShapeBuilder& builder
	): _face_winding(builder.FaceWinding())
	 , _shape_instr(builder.Instructions())
	 , _index_info(builder)
	 , _vbos(std::distance(names_begin, names_end)+1)
	 , _npvs(std::distance(names_begin, names_end)+1, 0)
	 , _names(std::distance(names_begin, names_end))
	{
		_init(builder, names_begin, names_end);
	}

	ShapeWrapperBase(ShapeWrapperBase&& temp)
	 : _face_winding(temp._face_winding)
	 , _shape_instr(std::move(temp._shape_instr))
	 , _index_info(temp._index_info)
	 , _gl(std::move(temp._gl))
	 , _vao(std::move(temp._vao))
	 , _vbos(std::move(temp._vbos))
	 , _npvs(std::move(temp._npvs))
	 , _names(std::move(temp._names))
	{ }

#if !OGLPLUS_NO_DELETED_FUNCTIONS
	ShapeWrapperBase(const ShapeWrapperBase&) = delete;
#else
private:
	ShapeWrapperBase(const ShapeWrapperBase&);
public:
#endif

	VertexArray VAOForProgram(const Program& prog)
	{
		VertexArray vao;
		vao.Bind();
		prog.Use();
		size_t i=0, n = _names.size();
		while(i != n)
		{
			if(_npvs[i] != 0)
			{
				try
				{
					_vbos[i].Bind(Buffer::Target::Array);
					VertexAttribArray attr(prog, _names[i]);
					attr.Setup(_npvs[i], DataType::Float);
					attr.Enable();
				}
				catch(Error&){ }
			}
			++i;
		}
		assert((i+1) == _npvs.size());
		if(_npvs[i] != 0)
		{
			assert((i+1) == _vbos.size());
			_vbos[i].Bind(Buffer::Target::ElementArray);
		}
		return std::move(vao);
	}

	void UseInProgram(const Program& prog)
	{
		_vao.Assign(VAOForProgram(prog));
	}

	void Use(void)
	{
		_vao.Bind();
	}

	void Draw(void)
	{
		_gl.FrontFace(_face_winding);
		_shape_instr.Draw(_index_info, 1);
	}

	void Draw(const std::function<bool (GLuint)>& drawing_driver)
	{
		_gl.FrontFace(_face_winding);
		_shape_instr.Draw(_index_info, 1, drawing_driver);
	}
};

/// Wraps instructions and VBOs and VAO used to render a shape built by a ShapeBuilder
class ShapeWrapper
 : public ShapeWrapperBase
{
public:
	ShapeWrapper(ShapeWrapper&& temp)
	 : ShapeWrapperBase(static_cast<ShapeWrapperBase&&>(temp))
	{ }
	
	template <typename StdRange, class ShapeBuilder>
	ShapeWrapper(	
		const StdRange& names,
		const ShapeBuilder& builder
	): ShapeWrapperBase(names.begin(), names.end(), builder)
	{ }

	template <typename StdRange, class ShapeBuilder>
	ShapeWrapper(
		const StdRange& names,
		const ShapeBuilder& builder,
		const Program& prog
	): ShapeWrapperBase(names.begin(), names.end(), builder)
	{
		UseInProgram(prog);
	}

#if !OGLPLUS_NO_INITIALIZER_LISTS
	template <class ShapeBuilder>
	ShapeWrapper(
		const std::initializer_list<const GLchar*>& names,
		const ShapeBuilder& builder
	): ShapeWrapperBase(names.begin(), names.end(), builder)
	{ }

	template <class ShapeBuilder>
	ShapeWrapper(
		const std::initializer_list<const GLchar*>& names,
		const ShapeBuilder& builder,
		const Program& prog
	): ShapeWrapperBase(names.begin(), names.end(), builder)
	{
		UseInProgram(prog);
	}
#endif

	template <class ShapeBuilder>
	ShapeWrapper(
		const GLchar** names,
		unsigned name_count,
		const ShapeBuilder& builder
	): ShapeWrapperBase(names, names+name_count, builder)
	{ }

	template <class ShapeBuilder>
	ShapeWrapper(
		const GLchar** names,
		unsigned name_count,
		const ShapeBuilder& builder,
		const Program& prog
	): ShapeWrapperBase(names, names+name_count, builder)
	{
		UseInProgram(prog);
	}
};

} // shapes
} // oglplus

#endif // include guard
