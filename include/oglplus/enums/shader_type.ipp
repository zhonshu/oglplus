/*
 *  .file oglplus/enums/shader_type.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/shader_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// VERTEX_SHADER
Vertex,
/// TESS_CONTROL_SHADER
TessControl,
/// TESS_EVALUATION_SHADER
TessEvaluation,
/// GEOMETRY_SHADER
Geometry,
/// FRAGMENT_SHADER
Fragment

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_VERTEX_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Vertex)
#  pragma push_macro("Vertex")
#  undef Vertex
   OGLPLUS_ENUM_CLASS_VALUE(Vertex, GL_VERTEX_SHADER)
#  pragma pop_macro("Vertex")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Vertex, GL_VERTEX_SHADER)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TESS_CONTROL_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(TessControl)
#  pragma push_macro("TessControl")
#  undef TessControl
   OGLPLUS_ENUM_CLASS_VALUE(TessControl, GL_TESS_CONTROL_SHADER)
#  pragma pop_macro("TessControl")
# else
   OGLPLUS_ENUM_CLASS_VALUE(TessControl, GL_TESS_CONTROL_SHADER)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TESS_EVALUATION_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(TessEvaluation)
#  pragma push_macro("TessEvaluation")
#  undef TessEvaluation
   OGLPLUS_ENUM_CLASS_VALUE(TessEvaluation, GL_TESS_EVALUATION_SHADER)
#  pragma pop_macro("TessEvaluation")
# else
   OGLPLUS_ENUM_CLASS_VALUE(TessEvaluation, GL_TESS_EVALUATION_SHADER)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_GEOMETRY_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Geometry)
#  pragma push_macro("Geometry")
#  undef Geometry
   OGLPLUS_ENUM_CLASS_VALUE(Geometry, GL_GEOMETRY_SHADER)
#  pragma pop_macro("Geometry")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Geometry, GL_GEOMETRY_SHADER)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_FRAGMENT_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Fragment)
#  pragma push_macro("Fragment")
#  undef Fragment
   OGLPLUS_ENUM_CLASS_VALUE(Fragment, GL_FRAGMENT_SHADER)
#  pragma pop_macro("Fragment")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Fragment, GL_FRAGMENT_SHADER)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

