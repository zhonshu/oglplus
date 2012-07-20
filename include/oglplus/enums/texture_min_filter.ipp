/*
 *  .file oglplus/enums/texture_min_filter.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_min_filter.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// NEAREST
Nearest,
/// LINEAR
Linear,
/// NEAREST_MIPMAP_NEAREST
NearestMipmapNearest,
/// NEAREST_MIPMAP_LINEAR
NearestMipmapLinear,
/// LINEAR_MIPMAP_NEAREST
LinearMipmapNearest,
/// LINEAR_MIPMAP_LINEAR
LinearMipmapLinear

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_NEAREST
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Nearest)
#  pragma push_macro("Nearest")
#  undef Nearest
   OGLPLUS_ENUM_CLASS_VALUE(Nearest, GL_NEAREST)
#  pragma pop_macro("Nearest")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Nearest, GL_NEAREST)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINEAR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Linear)
#  pragma push_macro("Linear")
#  undef Linear
   OGLPLUS_ENUM_CLASS_VALUE(Linear, GL_LINEAR)
#  pragma pop_macro("Linear")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Linear, GL_LINEAR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_NEAREST_MIPMAP_NEAREST
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(NearestMipmapNearest)
#  pragma push_macro("NearestMipmapNearest")
#  undef NearestMipmapNearest
   OGLPLUS_ENUM_CLASS_VALUE(NearestMipmapNearest, GL_NEAREST_MIPMAP_NEAREST)
#  pragma pop_macro("NearestMipmapNearest")
# else
   OGLPLUS_ENUM_CLASS_VALUE(NearestMipmapNearest, GL_NEAREST_MIPMAP_NEAREST)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_NEAREST_MIPMAP_LINEAR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(NearestMipmapLinear)
#  pragma push_macro("NearestMipmapLinear")
#  undef NearestMipmapLinear
   OGLPLUS_ENUM_CLASS_VALUE(NearestMipmapLinear, GL_NEAREST_MIPMAP_LINEAR)
#  pragma pop_macro("NearestMipmapLinear")
# else
   OGLPLUS_ENUM_CLASS_VALUE(NearestMipmapLinear, GL_NEAREST_MIPMAP_LINEAR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINEAR_MIPMAP_NEAREST
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(LinearMipmapNearest)
#  pragma push_macro("LinearMipmapNearest")
#  undef LinearMipmapNearest
   OGLPLUS_ENUM_CLASS_VALUE(LinearMipmapNearest, GL_LINEAR_MIPMAP_NEAREST)
#  pragma pop_macro("LinearMipmapNearest")
# else
   OGLPLUS_ENUM_CLASS_VALUE(LinearMipmapNearest, GL_LINEAR_MIPMAP_NEAREST)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINEAR_MIPMAP_LINEAR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(LinearMipmapLinear)
#  pragma push_macro("LinearMipmapLinear")
#  undef LinearMipmapLinear
   OGLPLUS_ENUM_CLASS_VALUE(LinearMipmapLinear, GL_LINEAR_MIPMAP_LINEAR)
#  pragma pop_macro("LinearMipmapLinear")
# else
   OGLPLUS_ENUM_CLASS_VALUE(LinearMipmapLinear, GL_LINEAR_MIPMAP_LINEAR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

