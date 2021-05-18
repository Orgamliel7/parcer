#ifndef PARSER_STRINGS_H
#define PARSER_STRINGS_H

#include <map>
#include "boost/assign.hpp"
#include "enums.h"

using namespace std;
using namespace boost::assign;

const string terminalStrings[] = { "id", "+", "*", "(", ")", "$", "e" };
const string tokenStrings[] = { "E", "E_", "T", "T_", "F" };

const map<string, terminal> str_to_terminal = map_list_of
        ("id", ID)("+", PLUS)("*", ASTERISK)
        ("(", LPAREN)(")", RPAREN);

#endif //PARSER_STRINGS_H
