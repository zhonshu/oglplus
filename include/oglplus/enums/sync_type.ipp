/*
 *  .file oglplus/enums/sync_type.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/sync_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// SYNC_FENCE
Fence

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_SYNC_FENCE
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(Fence)
#  pragma push_macro("Fence")
#  undef Fence
   OGLPLUS_ENUM_CLASS_VALUE(Fence, GL_SYNC_FENCE)
#  pragma pop_macro("Fence")
# else
   OGLPLUS_ENUM_CLASS_VALUE(Fence, GL_SYNC_FENCE)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

