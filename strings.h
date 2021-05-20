#ifndef PARSER_STRINGS_H
#define PARSER_STRINGS_H

#ifndef BOOST_ASSIGN_HPP
#define BOOST_ASSIGN_HPP

#if defined(_MSC_VER)
# pragma once
#endif

#include <boost/assign/std.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/assignment_exception.hpp>
#endif
#include <map>
#include "boost/assign.hpp"
#include "enums.h"

using namespace std;
using namespace boost::assign;

const string terminalStrings[] = { "id", "+", "*", "(", ")", "$", "e" };
const string tokenStrings[] = { "E", "E_", "T", "T_", "F" };

const map<string, terminal> stringForTer = map_list_of
        ("id", ID)("+", PLUS)("*", ASTERISK)
        ("(", LPAREN)(")", RPAREN);

#endif
