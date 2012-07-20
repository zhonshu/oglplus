/*
 *  .file oglplus/enums/transform_feedback_target.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/transform_feedback_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// TRANSFORM_FEEDBACK: The default target
TransformFeedback

#else // !OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_TRANSFORM_FEEDBACK
# if OGLPLUS_LIST_NEEDS_COMMA
    OGLPLUS_ENUM_CLASS_COMMA
# endif
# if OGLPLUS_NO_SCOPED_ENUMS && defined(TransformFeedback)
#  pragma push_macro("TransformFeedback")
#  undef TransformFeedback
   OGLPLUS_ENUM_CLASS_VALUE(TransformFeedback, GL_TRANSFORM_FEEDBACK)
#  pragma pop_macro("TransformFeedback")
# else
   OGLPLUS_ENUM_CLASS_VALUE(TransformFeedback, GL_TRANSFORM_FEEDBACK)
# endif
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // !OGLPLUS_DOCUMENTATION_ONLY

