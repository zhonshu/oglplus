//  File implement/oglplus/enums/ext/debug_type_range.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/ext/debug_type.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2015 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	DebugType
> ValueRange_(DebugType*)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_DEBUGTYPE)
#define OGLPLUS_IMPL_EVR_DEBUGTYPE
{
static const GLenum _values[] = {
#if defined GL_DEBUG_TYPE_ERROR
GL_DEBUG_TYPE_ERROR,
#endif
#if defined GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR,
#endif
#if defined GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR,
#endif
#if defined GL_DEBUG_TYPE_PORTABILITY
GL_DEBUG_TYPE_PORTABILITY,
#endif
#if defined GL_DEBUG_TYPE_PERFORMANCE
GL_DEBUG_TYPE_PERFORMANCE,
#endif
#if defined GL_DEBUG_TYPE_OTHER
GL_DEBUG_TYPE_OTHER,
#endif
#if defined GL_DEBUG_TYPE_MARKER
GL_DEBUG_TYPE_MARKER,
#endif
#if defined GL_DEBUG_TYPE_PUSH_GROUP
GL_DEBUG_TYPE_PUSH_GROUP,
#endif
#if defined GL_DEBUG_TYPE_POP_GROUP
GL_DEBUG_TYPE_POP_GROUP,
#endif
#if defined GL_DONT_CARE
GL_DONT_CARE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	DebugType
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

