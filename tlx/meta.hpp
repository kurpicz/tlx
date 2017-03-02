/*******************************************************************************
 * tlx/meta.hpp
 *
 * Part of tlx - http://panthema.net/tlx
 *
 * Copyright (C) 2017 Timo Bingmann <tb@panthema.net>
 *
 * All rights reserved. Published under the Boost Software License, Version 1.0
 ******************************************************************************/

#ifndef TLX_META_HEADER
#define TLX_META_HEADER

/*[[[perl
print "#include <$_>\n" foreach sort glob("tlx/meta/"."*.hpp");
]]]*/
#include <tlx/meta/apply_tuple.hpp>
#include <tlx/meta/call_foreach.hpp>
#include <tlx/meta/index_sequence.hpp>
#include <tlx/meta/is_std_array.hpp>
#include <tlx/meta/is_std_pair.hpp>
#include <tlx/meta/is_std_tuple.hpp>
#include <tlx/meta/is_std_vector.hpp>
#include <tlx/meta/log2.hpp>
// [[[end]]]

#endif // !TLX_META_HEADER

/******************************************************************************/
