/*
 *  .file oglplus/enums/blend_function.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/blend_function.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// ZERO
Zero,
/// ONE
One,
/// SRC_COLOR
SrcColor,
/// ONE_MINUS_SRC_COLOR
OneMinusSrcColor,
/// DST_COLOR
DstColor,
/// ONE_MINUS_DST_COLOR
OneMinusDstColor,
/// SRC_ALPHA
SrcAlpha,
/// ONE_MINUS_SRC_ALPHA
OneMinusSrcAlpha,
/// DST_ALPHA
DstAlpha,
/// ONE_MINUS_DST_ALPHA
OneMinusDstAlpha,
/// CONSTANT_COLOR
ConstantColor,
/// ONE_MINUS_CONSTANT_COLOR
OneMinusConstantColor,
/// CONSTANT_ALPHA
ConstantAlpha,
/// ONE_MINUS_CONSTANT_ALPHA
OneMinusConstantAlpha,
/// SRC_ALPHA_SATURATE
SrcAlphaSaturate,
/// SRC1_COLOR
Src1Color,
/// ONE_MINUS_SRC1_COLOR
OneMinusSrc1Color,
/// SRC1_ALPHA
Src1Alpha,
/// ONE_MINUS_SRC1_ALPHA
OneMinusSrc1Alpha

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_ZERO
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Zero)
#  pragma push_macro("Zero")
#  undef Zero
   OGLPLUS_ENUM_CLASS_VALUE(Zero, GL_ZERO)
#  pragma pop_macro("Zero")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Zero, GL_ZERO)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(One)
#  pragma push_macro("One")
#  undef One
   OGLPLUS_ENUM_CLASS_VALUE(One, GL_ONE)
#  pragma pop_macro("One")
# else
   OGLPLUS_ENUM_CLASS_VALUE(One, GL_ONE)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRC_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(SrcColor)
#  pragma push_macro("SrcColor")
#  undef SrcColor
   OGLPLUS_ENUM_CLASS_VALUE(SrcColor, GL_SRC_COLOR)
#  pragma pop_macro("SrcColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(SrcColor, GL_SRC_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_SRC_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusSrcColor)
#  pragma push_macro("OneMinusSrcColor")
#  undef OneMinusSrcColor
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrcColor, GL_ONE_MINUS_SRC_COLOR)
#  pragma pop_macro("OneMinusSrcColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrcColor, GL_ONE_MINUS_SRC_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DST_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DstColor)
#  pragma push_macro("DstColor")
#  undef DstColor
   OGLPLUS_ENUM_CLASS_VALUE(DstColor, GL_DST_COLOR)
#  pragma pop_macro("DstColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DstColor, GL_DST_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_DST_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusDstColor)
#  pragma push_macro("OneMinusDstColor")
#  undef OneMinusDstColor
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusDstColor, GL_ONE_MINUS_DST_COLOR)
#  pragma pop_macro("OneMinusDstColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusDstColor, GL_ONE_MINUS_DST_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRC_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(SrcAlpha)
#  pragma push_macro("SrcAlpha")
#  undef SrcAlpha
   OGLPLUS_ENUM_CLASS_VALUE(SrcAlpha, GL_SRC_ALPHA)
#  pragma pop_macro("SrcAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(SrcAlpha, GL_SRC_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_SRC_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusSrcAlpha)
#  pragma push_macro("OneMinusSrcAlpha")
#  undef OneMinusSrcAlpha
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrcAlpha, GL_ONE_MINUS_SRC_ALPHA)
#  pragma pop_macro("OneMinusSrcAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrcAlpha, GL_ONE_MINUS_SRC_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DST_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DstAlpha)
#  pragma push_macro("DstAlpha")
#  undef DstAlpha
   OGLPLUS_ENUM_CLASS_VALUE(DstAlpha, GL_DST_ALPHA)
#  pragma pop_macro("DstAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DstAlpha, GL_DST_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_DST_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusDstAlpha)
#  pragma push_macro("OneMinusDstAlpha")
#  undef OneMinusDstAlpha
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusDstAlpha, GL_ONE_MINUS_DST_ALPHA)
#  pragma pop_macro("OneMinusDstAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusDstAlpha, GL_ONE_MINUS_DST_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_CONSTANT_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(ConstantColor)
#  pragma push_macro("ConstantColor")
#  undef ConstantColor
   OGLPLUS_ENUM_CLASS_VALUE(ConstantColor, GL_CONSTANT_COLOR)
#  pragma pop_macro("ConstantColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(ConstantColor, GL_CONSTANT_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_CONSTANT_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusConstantColor)
#  pragma push_macro("OneMinusConstantColor")
#  undef OneMinusConstantColor
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusConstantColor, GL_ONE_MINUS_CONSTANT_COLOR)
#  pragma pop_macro("OneMinusConstantColor")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusConstantColor, GL_ONE_MINUS_CONSTANT_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_CONSTANT_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(ConstantAlpha)
#  pragma push_macro("ConstantAlpha")
#  undef ConstantAlpha
   OGLPLUS_ENUM_CLASS_VALUE(ConstantAlpha, GL_CONSTANT_ALPHA)
#  pragma pop_macro("ConstantAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(ConstantAlpha, GL_CONSTANT_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_CONSTANT_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusConstantAlpha)
#  pragma push_macro("OneMinusConstantAlpha")
#  undef OneMinusConstantAlpha
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusConstantAlpha, GL_ONE_MINUS_CONSTANT_ALPHA)
#  pragma pop_macro("OneMinusConstantAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusConstantAlpha, GL_ONE_MINUS_CONSTANT_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRC_ALPHA_SATURATE
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(SrcAlphaSaturate)
#  pragma push_macro("SrcAlphaSaturate")
#  undef SrcAlphaSaturate
   OGLPLUS_ENUM_CLASS_VALUE(SrcAlphaSaturate, GL_SRC_ALPHA_SATURATE)
#  pragma pop_macro("SrcAlphaSaturate")
# else
   OGLPLUS_ENUM_CLASS_VALUE(SrcAlphaSaturate, GL_SRC_ALPHA_SATURATE)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRC1_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Src1Color)
#  pragma push_macro("Src1Color")
#  undef Src1Color
   OGLPLUS_ENUM_CLASS_VALUE(Src1Color, GL_SRC1_COLOR)
#  pragma pop_macro("Src1Color")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Src1Color, GL_SRC1_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_SRC1_COLOR
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusSrc1Color)
#  pragma push_macro("OneMinusSrc1Color")
#  undef OneMinusSrc1Color
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrc1Color, GL_ONE_MINUS_SRC1_COLOR)
#  pragma pop_macro("OneMinusSrc1Color")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrc1Color, GL_ONE_MINUS_SRC1_COLOR)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRC1_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Src1Alpha)
#  pragma push_macro("Src1Alpha")
#  undef Src1Alpha
   OGLPLUS_ENUM_CLASS_VALUE(Src1Alpha, GL_SRC1_ALPHA)
#  pragma pop_macro("Src1Alpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Src1Alpha, GL_SRC1_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_ONE_MINUS_SRC1_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(OneMinusSrc1Alpha)
#  pragma push_macro("OneMinusSrc1Alpha")
#  undef OneMinusSrc1Alpha
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrc1Alpha, GL_ONE_MINUS_SRC1_ALPHA)
#  pragma pop_macro("OneMinusSrc1Alpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(OneMinusSrc1Alpha, GL_ONE_MINUS_SRC1_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

