/*
 *  .file eglplus/enums/transparent_type_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/eglplus/transparent_type.txt' instead.
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
EGLPLUS_LIB_FUNC StrCRef ValueName_(
	TransparentType*,
	EGLenum value
)
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVN_TRANSPARENTTYPE)
#define EGLPLUS_IMPL_EVN_TRANSPARENTTYPE
{
switch(value)
{
#if defined EGL_NONE
	case EGL_NONE: return StrCRef("NONE");
#endif
#if defined EGL_TRANSPARENT_RGB
	case EGL_TRANSPARENT_RGB: return StrCRef("TRANSPARENT_RGB");
#endif
	default:;
}
EGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums

