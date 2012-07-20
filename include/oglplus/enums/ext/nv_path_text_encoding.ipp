/*
 *  .file oglplus/enums/ext/nv_path_text_encoding.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_text_encoding.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// UTF8_NV
UTF8,
/// UTF16_NV
UTF16

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_UTF8_NV
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(UTF8)
#  pragma push_macro("UTF8")
#  undef UTF8
   OGLPLUS_ENUM_CLASS_VALUE(UTF8, GL_UTF8_NV)
#  pragma pop_macro("UTF8")
# else
   OGLPLUS_ENUM_CLASS_VALUE(UTF8, GL_UTF8_NV)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_UTF16_NV
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(UTF16)
#  pragma push_macro("UTF16")
#  undef UTF16
   OGLPLUS_ENUM_CLASS_VALUE(UTF16, GL_UTF16_NV)
#  pragma pop_macro("UTF16")
# else
   OGLPLUS_ENUM_CLASS_VALUE(UTF16, GL_UTF16_NV)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

