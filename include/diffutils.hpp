#pragma once

#include <vector>
#include <experimental/string_view>

#include "common.hpp"
#include "structs.hpp"

using std::vector;

namespace diffutils {

double ratio(std::experimental::string_view &s1, std::experimental::string_view &s2);

vector<matching_block> matching_blocks(const vector<op_code> ops, const size_t len1, const size_t len2);

/*
 * Find an optimal edit sequence from s1 to s2.
 *
 * When there's more than one optimal sequence, one is
 * arbitrarily (though deterministically) chosen.
 */
vector<op_code> opcodes(const string_view &s1, const string_view &s2);

}  // ns diffutils
