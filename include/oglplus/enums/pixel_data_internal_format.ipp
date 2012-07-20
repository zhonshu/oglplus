/*
 *  .file oglplus/enums/pixel_data_internal_format.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/pixel_data_internal_format.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// DEPTH_COMPONENT
DepthComponent,
/// DEPTH_STENCIL
DepthStencil,
/// RED
Red,
/// RG
RG,
/// RGB
RGB,
/// RGBA
RGBA,
/// R8
R8,
/// R8_SNORM
R8SNorm,
/// R16
R16,
/// R16_SNORM
R16SNorm,
/// RG8
RG8,
/// RG8_SNORM
RG8SNorm,
/// RG16
RG16,
/// RG16_SNORM
RG16SNorm,
/// R3_G3_B2
R3G3B2,
/// RGB4
RGB4,
/// RGB5
RGB5,
/// RGB8
RGB8,
/// RGB8_SNORM
RGB8SNorm,
/// RGB10
RGB10,
/// RGB12
RGB12,
/// RGB16
RGB16,
/// RGB16_SNORM
RGB16SNorm,
/// RGBA2
RGBA2,
/// RGBA4
RGBA4,
/// RGB5_A1
RGB5A1,
/// RGBA8
RGBA8,
/// RGBA8_SNORM
RGBA8SNorm,
/// RGB10_A2
RGB10A2,
/// RGB10_A2UI
RGB10A2UI,
/// RGBA12
RGBA12,
/// RGBA16
RGBA16,
/// RGBA16_SNORM
RGBA16SNorm,
/// SRGB8
SRGB8,
/// SRGB8_ALPHA8
SRGB8Alpha8,
/// R16F
R16F,
/// RG16F
RG16F,
/// RGB16F
RGB16F,
/// RGBA16F
RGBA16F,
/// R32F
R32F,
/// RG32F
RG32F,
/// RGB32F
RGB32F,
/// RGBA32F
RGBA32F,
/// R11F_G11F_B10F
R11FG11FB10F,
/// RGB9_E5
RGB9E5,
/// R8I
R8I,
/// R8UI
R8UI,
/// R16I
R16I,
/// R16UI
R16UI,
/// R32I
R32I,
/// R32UI
R32UI,
/// RG8I
RG8I,
/// RG8UI
RG8UI,
/// RG16I
RG16I,
/// RG16UI
RG16UI,
/// RG32I
RG32I,
/// RG32UI
RG32UI,
/// RGB8I
RGB8I,
/// RGB8UI
RGB8UI,
/// RGB16I
RGB16I,
/// RGB16UI
RGB16UI,
/// RGB32I
RGB32I,
/// RGB32UI
RGB32UI,
/// RGBA8I
RGBA8I,
/// RGBA8UI
RGBA8UI,
/// RGBA16I
RGBA16I,
/// RGBA16UI
RGBA16UI,
/// RGBA32I
RGBA32I,
/// RGBA32UI
RGBA32UI,
/// DEPTH_COMPONENT16
DepthComponent16,
/// DEPTH_COMPONENT24
DepthComponent24,
/// DEPTH_COMPONENT32
DepthComponent32,
/// DEPTH_COMPONENT32F
DepthComponent32F,
/// DEPTH24_STENCIL8
Depth24Stencil8,
/// DEPTH32F_STENCIL8
Depth32fStencil8,
/// COMPRESSED_RED
CompressedRed,
/// COMPRESSED_RG
CompressedRG,
/// COMPRESSED_RGB
CompressedRGB,
/// COMPRESSED_RGBA
CompressedRGBA,
/// COMPRESSED_SRGB
CompressedSRGB,
/// COMPRESSED_SRGB_ALPHA
CompressedSRGBAlpha,
/// COMPRESSED_RED_RGTC1
CompressedRedRGTC1,
/// COMPRESSED_SIGNED_RED_RGTC1
CompressedSignedRedRGTC1,
/// COMPRESSED_RG_RGTC2
CompressedRGRGTC2,
/// COMPRESSED_SIGNED_RG_RGTC2
CompressedSignedRGRGTC2

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_DEPTH_COMPONENT
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthComponent)
#  pragma push_macro("DepthComponent")
#  undef DepthComponent
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent, GL_DEPTH_COMPONENT)
#  pragma pop_macro("DepthComponent")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent, GL_DEPTH_COMPONENT)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH_STENCIL
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthStencil)
#  pragma push_macro("DepthStencil")
#  undef DepthStencil
   OGLPLUS_ENUM_CLASS_VALUE(DepthStencil, GL_DEPTH_STENCIL)
#  pragma pop_macro("DepthStencil")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthStencil, GL_DEPTH_STENCIL)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RED
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Red)
#  pragma push_macro("Red")
#  undef Red
   OGLPLUS_ENUM_CLASS_VALUE(Red, GL_RED)
#  pragma pop_macro("Red")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Red, GL_RED)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG)
#  pragma push_macro("RG")
#  undef RG
   OGLPLUS_ENUM_CLASS_VALUE(RG, GL_RG)
#  pragma pop_macro("RG")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG, GL_RG)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB)
#  pragma push_macro("RGB")
#  undef RGB
   OGLPLUS_ENUM_CLASS_VALUE(RGB, GL_RGB)
#  pragma pop_macro("RGB")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB, GL_RGB)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA)
#  pragma push_macro("RGBA")
#  undef RGBA
   OGLPLUS_ENUM_CLASS_VALUE(RGBA, GL_RGBA)
#  pragma pop_macro("RGBA")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA, GL_RGBA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R8)
#  pragma push_macro("R8")
#  undef R8
   OGLPLUS_ENUM_CLASS_VALUE(R8, GL_R8)
#  pragma pop_macro("R8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R8, GL_R8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R8_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R8SNorm)
#  pragma push_macro("R8SNorm")
#  undef R8SNorm
   OGLPLUS_ENUM_CLASS_VALUE(R8SNorm, GL_R8_SNORM)
#  pragma pop_macro("R8SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R8SNorm, GL_R8_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R16
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R16)
#  pragma push_macro("R16")
#  undef R16
   OGLPLUS_ENUM_CLASS_VALUE(R16, GL_R16)
#  pragma pop_macro("R16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R16, GL_R16)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R16_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R16SNorm)
#  pragma push_macro("R16SNorm")
#  undef R16SNorm
   OGLPLUS_ENUM_CLASS_VALUE(R16SNorm, GL_R16_SNORM)
#  pragma pop_macro("R16SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R16SNorm, GL_R16_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG8)
#  pragma push_macro("RG8")
#  undef RG8
   OGLPLUS_ENUM_CLASS_VALUE(RG8, GL_RG8)
#  pragma pop_macro("RG8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG8, GL_RG8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG8_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG8SNorm)
#  pragma push_macro("RG8SNorm")
#  undef RG8SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RG8SNorm, GL_RG8_SNORM)
#  pragma pop_macro("RG8SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG8SNorm, GL_RG8_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG16
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG16)
#  pragma push_macro("RG16")
#  undef RG16
   OGLPLUS_ENUM_CLASS_VALUE(RG16, GL_RG16)
#  pragma pop_macro("RG16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG16, GL_RG16)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG16_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG16SNorm)
#  pragma push_macro("RG16SNorm")
#  undef RG16SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RG16SNorm, GL_RG16_SNORM)
#  pragma pop_macro("RG16SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG16SNorm, GL_RG16_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R3_G3_B2
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R3G3B2)
#  pragma push_macro("R3G3B2")
#  undef R3G3B2
   OGLPLUS_ENUM_CLASS_VALUE(R3G3B2, GL_R3_G3_B2)
#  pragma pop_macro("R3G3B2")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R3G3B2, GL_R3_G3_B2)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB4
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB4)
#  pragma push_macro("RGB4")
#  undef RGB4
   OGLPLUS_ENUM_CLASS_VALUE(RGB4, GL_RGB4)
#  pragma pop_macro("RGB4")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB4, GL_RGB4)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB5
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB5)
#  pragma push_macro("RGB5")
#  undef RGB5
   OGLPLUS_ENUM_CLASS_VALUE(RGB5, GL_RGB5)
#  pragma pop_macro("RGB5")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB5, GL_RGB5)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB8)
#  pragma push_macro("RGB8")
#  undef RGB8
   OGLPLUS_ENUM_CLASS_VALUE(RGB8, GL_RGB8)
#  pragma pop_macro("RGB8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB8, GL_RGB8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB8_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB8SNorm)
#  pragma push_macro("RGB8SNorm")
#  undef RGB8SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RGB8SNorm, GL_RGB8_SNORM)
#  pragma pop_macro("RGB8SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB8SNorm, GL_RGB8_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB10
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB10)
#  pragma push_macro("RGB10")
#  undef RGB10
   OGLPLUS_ENUM_CLASS_VALUE(RGB10, GL_RGB10)
#  pragma pop_macro("RGB10")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB10, GL_RGB10)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB12
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB12)
#  pragma push_macro("RGB12")
#  undef RGB12
   OGLPLUS_ENUM_CLASS_VALUE(RGB12, GL_RGB12)
#  pragma pop_macro("RGB12")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB12, GL_RGB12)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB16
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB16)
#  pragma push_macro("RGB16")
#  undef RGB16
   OGLPLUS_ENUM_CLASS_VALUE(RGB16, GL_RGB16)
#  pragma pop_macro("RGB16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB16, GL_RGB16)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB16_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB16SNorm)
#  pragma push_macro("RGB16SNorm")
#  undef RGB16SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RGB16SNorm, GL_RGB16_SNORM)
#  pragma pop_macro("RGB16SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB16SNorm, GL_RGB16_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA2
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA2)
#  pragma push_macro("RGBA2")
#  undef RGBA2
   OGLPLUS_ENUM_CLASS_VALUE(RGBA2, GL_RGBA2)
#  pragma pop_macro("RGBA2")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA2, GL_RGBA2)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA4
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA4)
#  pragma push_macro("RGBA4")
#  undef RGBA4
   OGLPLUS_ENUM_CLASS_VALUE(RGBA4, GL_RGBA4)
#  pragma pop_macro("RGBA4")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA4, GL_RGBA4)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB5_A1
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB5A1)
#  pragma push_macro("RGB5A1")
#  undef RGB5A1
   OGLPLUS_ENUM_CLASS_VALUE(RGB5A1, GL_RGB5_A1)
#  pragma pop_macro("RGB5A1")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB5A1, GL_RGB5_A1)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA8)
#  pragma push_macro("RGBA8")
#  undef RGBA8
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8, GL_RGBA8)
#  pragma pop_macro("RGBA8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8, GL_RGBA8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA8_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA8SNorm)
#  pragma push_macro("RGBA8SNorm")
#  undef RGBA8SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8SNorm, GL_RGBA8_SNORM)
#  pragma pop_macro("RGBA8SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8SNorm, GL_RGBA8_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB10_A2
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB10A2)
#  pragma push_macro("RGB10A2")
#  undef RGB10A2
   OGLPLUS_ENUM_CLASS_VALUE(RGB10A2, GL_RGB10_A2)
#  pragma pop_macro("RGB10A2")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB10A2, GL_RGB10_A2)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB10_A2UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB10A2UI)
#  pragma push_macro("RGB10A2UI")
#  undef RGB10A2UI
   OGLPLUS_ENUM_CLASS_VALUE(RGB10A2UI, GL_RGB10_A2UI)
#  pragma pop_macro("RGB10A2UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB10A2UI, GL_RGB10_A2UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA12
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA12)
#  pragma push_macro("RGBA12")
#  undef RGBA12
   OGLPLUS_ENUM_CLASS_VALUE(RGBA12, GL_RGBA12)
#  pragma pop_macro("RGBA12")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA12, GL_RGBA12)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA16
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA16)
#  pragma push_macro("RGBA16")
#  undef RGBA16
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16, GL_RGBA16)
#  pragma pop_macro("RGBA16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16, GL_RGBA16)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA16_SNORM
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA16SNorm)
#  pragma push_macro("RGBA16SNorm")
#  undef RGBA16SNorm
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16SNorm, GL_RGBA16_SNORM)
#  pragma pop_macro("RGBA16SNorm")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16SNorm, GL_RGBA16_SNORM)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRGB8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(SRGB8)
#  pragma push_macro("SRGB8")
#  undef SRGB8
   OGLPLUS_ENUM_CLASS_VALUE(SRGB8, GL_SRGB8)
#  pragma pop_macro("SRGB8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(SRGB8, GL_SRGB8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_SRGB8_ALPHA8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(SRGB8Alpha8)
#  pragma push_macro("SRGB8Alpha8")
#  undef SRGB8Alpha8
   OGLPLUS_ENUM_CLASS_VALUE(SRGB8Alpha8, GL_SRGB8_ALPHA8)
#  pragma pop_macro("SRGB8Alpha8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(SRGB8Alpha8, GL_SRGB8_ALPHA8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R16F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R16F)
#  pragma push_macro("R16F")
#  undef R16F
   OGLPLUS_ENUM_CLASS_VALUE(R16F, GL_R16F)
#  pragma pop_macro("R16F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R16F, GL_R16F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG16F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG16F)
#  pragma push_macro("RG16F")
#  undef RG16F
   OGLPLUS_ENUM_CLASS_VALUE(RG16F, GL_RG16F)
#  pragma pop_macro("RG16F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG16F, GL_RG16F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB16F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB16F)
#  pragma push_macro("RGB16F")
#  undef RGB16F
   OGLPLUS_ENUM_CLASS_VALUE(RGB16F, GL_RGB16F)
#  pragma pop_macro("RGB16F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB16F, GL_RGB16F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA16F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA16F)
#  pragma push_macro("RGBA16F")
#  undef RGBA16F
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16F, GL_RGBA16F)
#  pragma pop_macro("RGBA16F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16F, GL_RGBA16F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R32F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R32F)
#  pragma push_macro("R32F")
#  undef R32F
   OGLPLUS_ENUM_CLASS_VALUE(R32F, GL_R32F)
#  pragma pop_macro("R32F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R32F, GL_R32F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG32F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG32F)
#  pragma push_macro("RG32F")
#  undef RG32F
   OGLPLUS_ENUM_CLASS_VALUE(RG32F, GL_RG32F)
#  pragma pop_macro("RG32F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG32F, GL_RG32F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB32F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB32F)
#  pragma push_macro("RGB32F")
#  undef RGB32F
   OGLPLUS_ENUM_CLASS_VALUE(RGB32F, GL_RGB32F)
#  pragma pop_macro("RGB32F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB32F, GL_RGB32F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA32F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA32F)
#  pragma push_macro("RGBA32F")
#  undef RGBA32F
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32F, GL_RGBA32F)
#  pragma pop_macro("RGBA32F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32F, GL_RGBA32F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R11F_G11F_B10F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R11FG11FB10F)
#  pragma push_macro("R11FG11FB10F")
#  undef R11FG11FB10F
   OGLPLUS_ENUM_CLASS_VALUE(R11FG11FB10F, GL_R11F_G11F_B10F)
#  pragma pop_macro("R11FG11FB10F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R11FG11FB10F, GL_R11F_G11F_B10F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB9_E5
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB9E5)
#  pragma push_macro("RGB9E5")
#  undef RGB9E5
   OGLPLUS_ENUM_CLASS_VALUE(RGB9E5, GL_RGB9_E5)
#  pragma pop_macro("RGB9E5")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB9E5, GL_RGB9_E5)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R8I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R8I)
#  pragma push_macro("R8I")
#  undef R8I
   OGLPLUS_ENUM_CLASS_VALUE(R8I, GL_R8I)
#  pragma pop_macro("R8I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R8I, GL_R8I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R8UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R8UI)
#  pragma push_macro("R8UI")
#  undef R8UI
   OGLPLUS_ENUM_CLASS_VALUE(R8UI, GL_R8UI)
#  pragma pop_macro("R8UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R8UI, GL_R8UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R16I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R16I)
#  pragma push_macro("R16I")
#  undef R16I
   OGLPLUS_ENUM_CLASS_VALUE(R16I, GL_R16I)
#  pragma pop_macro("R16I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R16I, GL_R16I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R16UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R16UI)
#  pragma push_macro("R16UI")
#  undef R16UI
   OGLPLUS_ENUM_CLASS_VALUE(R16UI, GL_R16UI)
#  pragma pop_macro("R16UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R16UI, GL_R16UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R32I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R32I)
#  pragma push_macro("R32I")
#  undef R32I
   OGLPLUS_ENUM_CLASS_VALUE(R32I, GL_R32I)
#  pragma pop_macro("R32I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R32I, GL_R32I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_R32UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(R32UI)
#  pragma push_macro("R32UI")
#  undef R32UI
   OGLPLUS_ENUM_CLASS_VALUE(R32UI, GL_R32UI)
#  pragma pop_macro("R32UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(R32UI, GL_R32UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG8I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG8I)
#  pragma push_macro("RG8I")
#  undef RG8I
   OGLPLUS_ENUM_CLASS_VALUE(RG8I, GL_RG8I)
#  pragma pop_macro("RG8I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG8I, GL_RG8I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG8UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG8UI)
#  pragma push_macro("RG8UI")
#  undef RG8UI
   OGLPLUS_ENUM_CLASS_VALUE(RG8UI, GL_RG8UI)
#  pragma pop_macro("RG8UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG8UI, GL_RG8UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG16I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG16I)
#  pragma push_macro("RG16I")
#  undef RG16I
   OGLPLUS_ENUM_CLASS_VALUE(RG16I, GL_RG16I)
#  pragma pop_macro("RG16I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG16I, GL_RG16I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG16UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG16UI)
#  pragma push_macro("RG16UI")
#  undef RG16UI
   OGLPLUS_ENUM_CLASS_VALUE(RG16UI, GL_RG16UI)
#  pragma pop_macro("RG16UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG16UI, GL_RG16UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG32I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG32I)
#  pragma push_macro("RG32I")
#  undef RG32I
   OGLPLUS_ENUM_CLASS_VALUE(RG32I, GL_RG32I)
#  pragma pop_macro("RG32I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG32I, GL_RG32I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RG32UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RG32UI)
#  pragma push_macro("RG32UI")
#  undef RG32UI
   OGLPLUS_ENUM_CLASS_VALUE(RG32UI, GL_RG32UI)
#  pragma pop_macro("RG32UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RG32UI, GL_RG32UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB8I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB8I)
#  pragma push_macro("RGB8I")
#  undef RGB8I
   OGLPLUS_ENUM_CLASS_VALUE(RGB8I, GL_RGB8I)
#  pragma pop_macro("RGB8I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB8I, GL_RGB8I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB8UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB8UI)
#  pragma push_macro("RGB8UI")
#  undef RGB8UI
   OGLPLUS_ENUM_CLASS_VALUE(RGB8UI, GL_RGB8UI)
#  pragma pop_macro("RGB8UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB8UI, GL_RGB8UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB16I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB16I)
#  pragma push_macro("RGB16I")
#  undef RGB16I
   OGLPLUS_ENUM_CLASS_VALUE(RGB16I, GL_RGB16I)
#  pragma pop_macro("RGB16I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB16I, GL_RGB16I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB16UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB16UI)
#  pragma push_macro("RGB16UI")
#  undef RGB16UI
   OGLPLUS_ENUM_CLASS_VALUE(RGB16UI, GL_RGB16UI)
#  pragma pop_macro("RGB16UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB16UI, GL_RGB16UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB32I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB32I)
#  pragma push_macro("RGB32I")
#  undef RGB32I
   OGLPLUS_ENUM_CLASS_VALUE(RGB32I, GL_RGB32I)
#  pragma pop_macro("RGB32I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB32I, GL_RGB32I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGB32UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGB32UI)
#  pragma push_macro("RGB32UI")
#  undef RGB32UI
   OGLPLUS_ENUM_CLASS_VALUE(RGB32UI, GL_RGB32UI)
#  pragma pop_macro("RGB32UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGB32UI, GL_RGB32UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA8I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA8I)
#  pragma push_macro("RGBA8I")
#  undef RGBA8I
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8I, GL_RGBA8I)
#  pragma pop_macro("RGBA8I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8I, GL_RGBA8I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA8UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA8UI)
#  pragma push_macro("RGBA8UI")
#  undef RGBA8UI
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8UI, GL_RGBA8UI)
#  pragma pop_macro("RGBA8UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA8UI, GL_RGBA8UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA16I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA16I)
#  pragma push_macro("RGBA16I")
#  undef RGBA16I
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16I, GL_RGBA16I)
#  pragma pop_macro("RGBA16I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16I, GL_RGBA16I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA16UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA16UI)
#  pragma push_macro("RGBA16UI")
#  undef RGBA16UI
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16UI, GL_RGBA16UI)
#  pragma pop_macro("RGBA16UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA16UI, GL_RGBA16UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA32I
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA32I)
#  pragma push_macro("RGBA32I")
#  undef RGBA32I
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32I, GL_RGBA32I)
#  pragma pop_macro("RGBA32I")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32I, GL_RGBA32I)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_RGBA32UI
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(RGBA32UI)
#  pragma push_macro("RGBA32UI")
#  undef RGBA32UI
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32UI, GL_RGBA32UI)
#  pragma pop_macro("RGBA32UI")
# else
   OGLPLUS_ENUM_CLASS_VALUE(RGBA32UI, GL_RGBA32UI)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH_COMPONENT16
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthComponent16)
#  pragma push_macro("DepthComponent16")
#  undef DepthComponent16
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent16, GL_DEPTH_COMPONENT16)
#  pragma pop_macro("DepthComponent16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent16, GL_DEPTH_COMPONENT16)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH_COMPONENT24
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthComponent24)
#  pragma push_macro("DepthComponent24")
#  undef DepthComponent24
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent24, GL_DEPTH_COMPONENT24)
#  pragma pop_macro("DepthComponent24")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent24, GL_DEPTH_COMPONENT24)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH_COMPONENT32
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthComponent32)
#  pragma push_macro("DepthComponent32")
#  undef DepthComponent32
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent32, GL_DEPTH_COMPONENT32)
#  pragma pop_macro("DepthComponent32")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent32, GL_DEPTH_COMPONENT32)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH_COMPONENT32F
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(DepthComponent32F)
#  pragma push_macro("DepthComponent32F")
#  undef DepthComponent32F
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent32F, GL_DEPTH_COMPONENT32F)
#  pragma pop_macro("DepthComponent32F")
# else
   OGLPLUS_ENUM_CLASS_VALUE(DepthComponent32F, GL_DEPTH_COMPONENT32F)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH24_STENCIL8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Depth24Stencil8)
#  pragma push_macro("Depth24Stencil8")
#  undef Depth24Stencil8
   OGLPLUS_ENUM_CLASS_VALUE(Depth24Stencil8, GL_DEPTH24_STENCIL8)
#  pragma pop_macro("Depth24Stencil8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Depth24Stencil8, GL_DEPTH24_STENCIL8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_DEPTH32F_STENCIL8
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Depth32fStencil8)
#  pragma push_macro("Depth32fStencil8")
#  undef Depth32fStencil8
   OGLPLUS_ENUM_CLASS_VALUE(Depth32fStencil8, GL_DEPTH32F_STENCIL8)
#  pragma pop_macro("Depth32fStencil8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Depth32fStencil8, GL_DEPTH32F_STENCIL8)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RED
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRed)
#  pragma push_macro("CompressedRed")
#  undef CompressedRed
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRed, GL_COMPRESSED_RED)
#  pragma pop_macro("CompressedRed")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRed, GL_COMPRESSED_RED)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RG
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRG)
#  pragma push_macro("CompressedRG")
#  undef CompressedRG
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRG, GL_COMPRESSED_RG)
#  pragma pop_macro("CompressedRG")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRG, GL_COMPRESSED_RG)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RGB
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRGB)
#  pragma push_macro("CompressedRGB")
#  undef CompressedRGB
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGB, GL_COMPRESSED_RGB)
#  pragma pop_macro("CompressedRGB")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGB, GL_COMPRESSED_RGB)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RGBA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRGBA)
#  pragma push_macro("CompressedRGBA")
#  undef CompressedRGBA
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGBA, GL_COMPRESSED_RGBA)
#  pragma pop_macro("CompressedRGBA")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGBA, GL_COMPRESSED_RGBA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_SRGB
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedSRGB)
#  pragma push_macro("CompressedSRGB")
#  undef CompressedSRGB
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSRGB, GL_COMPRESSED_SRGB)
#  pragma pop_macro("CompressedSRGB")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSRGB, GL_COMPRESSED_SRGB)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_SRGB_ALPHA
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedSRGBAlpha)
#  pragma push_macro("CompressedSRGBAlpha")
#  undef CompressedSRGBAlpha
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSRGBAlpha, GL_COMPRESSED_SRGB_ALPHA)
#  pragma pop_macro("CompressedSRGBAlpha")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSRGBAlpha, GL_COMPRESSED_SRGB_ALPHA)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RED_RGTC1
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRedRGTC1)
#  pragma push_macro("CompressedRedRGTC1")
#  undef CompressedRedRGTC1
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRedRGTC1, GL_COMPRESSED_RED_RGTC1)
#  pragma pop_macro("CompressedRedRGTC1")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRedRGTC1, GL_COMPRESSED_RED_RGTC1)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_SIGNED_RED_RGTC1
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedSignedRedRGTC1)
#  pragma push_macro("CompressedSignedRedRGTC1")
#  undef CompressedSignedRedRGTC1
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSignedRedRGTC1, GL_COMPRESSED_SIGNED_RED_RGTC1)
#  pragma pop_macro("CompressedSignedRedRGTC1")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSignedRedRGTC1, GL_COMPRESSED_SIGNED_RED_RGTC1)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_RG_RGTC2
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedRGRGTC2)
#  pragma push_macro("CompressedRGRGTC2")
#  undef CompressedRGRGTC2
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGRGTC2, GL_COMPRESSED_RG_RGTC2)
#  pragma pop_macro("CompressedRGRGTC2")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedRGRGTC2, GL_COMPRESSED_RG_RGTC2)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_COMPRESSED_SIGNED_RG_RGTC2
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(CompressedSignedRGRGTC2)
#  pragma push_macro("CompressedSignedRGRGTC2")
#  undef CompressedSignedRGRGTC2
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSignedRGRGTC2, GL_COMPRESSED_SIGNED_RG_RGTC2)
#  pragma pop_macro("CompressedSignedRGRGTC2")
# else
   OGLPLUS_ENUM_CLASS_VALUE(CompressedSignedRGRGTC2, GL_COMPRESSED_SIGNED_RG_RGTC2)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

