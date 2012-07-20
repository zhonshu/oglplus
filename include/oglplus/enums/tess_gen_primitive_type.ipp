/*
 *  .file oglplus/enums/tess_gen_primitive_type.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/tess_gen_primitive_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// QUADS
Quads,
/// TRIANGLES
Triangles,
/// ISOLINES
Isolines

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_QUADS
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Quads)
#  pragma push_macro("Quads")
#  undef Quads
   OGLPLUS_ENUM_CLASS_VALUE(Quads, GL_QUADS)
#  pragma pop_macro("Quads")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Quads, GL_QUADS)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TRIANGLES
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Triangles)
#  pragma push_macro("Triangles")
#  undef Triangles
   OGLPLUS_ENUM_CLASS_VALUE(Triangles, GL_TRIANGLES)
#  pragma pop_macro("Triangles")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Triangles, GL_TRIANGLES)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ISOLINES
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Isolines)
#  pragma push_macro("Isolines")
#  undef Isolines
   OGLPLUS_ENUM_CLASS_VALUE(Isolines, GL_ISOLINES)
#  pragma pop_macro("Isolines")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Isolines, GL_ISOLINES)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

