/*
 *  .file oglplus/enums/ext/compat_prim_type.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/compat_prim_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// POINTS
Points,
/// LINE_STRIP
LineStrip,
/// LINE_LOOP
LineLoop,
/// LINES
Lines,
/// TRIANGLE_STRIP
TriangleStrip,
/// TRIANGLE_FAN
TriangleFan,
/// TRIANGLES
Triangles,
/// QUADS
Quads,
/// QUAD_STRIP
QuadStrip,
/// POLYGON
Polygon

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_POINTS
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Points)
#  pragma push_macro("Points")
#  undef Points
   OGLPLUS_ENUM_CLASS_VALUE(Points, GL_POINTS)
#  pragma pop_macro("Points")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Points, GL_POINTS)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINE_STRIP
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(LineStrip)
#  pragma push_macro("LineStrip")
#  undef LineStrip
   OGLPLUS_ENUM_CLASS_VALUE(LineStrip, GL_LINE_STRIP)
#  pragma pop_macro("LineStrip")
# else
   OGLPLUS_ENUM_CLASS_VALUE(LineStrip, GL_LINE_STRIP)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINE_LOOP
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(LineLoop)
#  pragma push_macro("LineLoop")
#  undef LineLoop
   OGLPLUS_ENUM_CLASS_VALUE(LineLoop, GL_LINE_LOOP)
#  pragma pop_macro("LineLoop")
# else
   OGLPLUS_ENUM_CLASS_VALUE(LineLoop, GL_LINE_LOOP)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_LINES
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Lines)
#  pragma push_macro("Lines")
#  undef Lines
   OGLPLUS_ENUM_CLASS_VALUE(Lines, GL_LINES)
#  pragma pop_macro("Lines")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Lines, GL_LINES)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TRIANGLE_STRIP
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(TriangleStrip)
#  pragma push_macro("TriangleStrip")
#  undef TriangleStrip
   OGLPLUS_ENUM_CLASS_VALUE(TriangleStrip, GL_TRIANGLE_STRIP)
#  pragma pop_macro("TriangleStrip")
# else
   OGLPLUS_ENUM_CLASS_VALUE(TriangleStrip, GL_TRIANGLE_STRIP)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TRIANGLE_FAN
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(TriangleFan)
#  pragma push_macro("TriangleFan")
#  undef TriangleFan
   OGLPLUS_ENUM_CLASS_VALUE(TriangleFan, GL_TRIANGLE_FAN)
#  pragma pop_macro("TriangleFan")
# else
   OGLPLUS_ENUM_CLASS_VALUE(TriangleFan, GL_TRIANGLE_FAN)
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
#if defined GL_QUAD_STRIP
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(QuadStrip)
#  pragma push_macro("QuadStrip")
#  undef QuadStrip
   OGLPLUS_ENUM_CLASS_VALUE(QuadStrip, GL_QUAD_STRIP)
#  pragma pop_macro("QuadStrip")
# else
   OGLPLUS_ENUM_CLASS_VALUE(QuadStrip, GL_QUAD_STRIP)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_POLYGON
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Polygon)
#  pragma push_macro("Polygon")
#  undef Polygon
   OGLPLUS_ENUM_CLASS_VALUE(Polygon, GL_POLYGON)
#  pragma pop_macro("Polygon")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Polygon, GL_POLYGON)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

