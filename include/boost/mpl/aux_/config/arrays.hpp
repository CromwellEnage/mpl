
#ifndef BOOST_MPL_AUX_CONFIG_ARRAYS_HPP_INCLUDED
#define BOOST_MPL_AUX_CONFIG_ARRAYS_HPP_INCLUDED

// Copyright (c) Aleksey Gurtovoy 2003-2004
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include "boost/mpl/aux_/config/msvc.hpp"
#include "boost/mpl/aux_/config/workaround.hpp"

#if !defined(BOOST_MPL_CFG_NO_DEPENDENT_ARRAY_TYPES) \
    && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x561)) \
    || BOOST_WORKAROUND(BOOST_MSVC, == 1300)

#   define BOOST_MPL_CFG_NO_DEPENDENT_ARRAY_TYPES

#endif

#endif // BOOST_MPL_AUX_CONFIG_ARRAYS_HPP_INCLUDED
