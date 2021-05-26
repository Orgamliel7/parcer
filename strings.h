#ifndef PARSER_STRINGS_H
#define PARSER_STRINGS_H

#ifndef BOOST_ASSIGN_HPP
#define BOOST_ASSIGN_HPP

#if defined(_MSC_VER)
#define IDSTRING "id"
#define PLUSSTRING "+"
#define ASTERISKSTRING "*"
#define LPARENSTRING "("
#define RPARENSTRING ")"



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
#include <iostream>
using namespace std;

//char * kw_table []=
//        {
//                "ELSE",
//                "FALSE",
//                "IF",
//                "PLATYPUS",
//                "READ",
//                "REPEAT",
//                "THEN",
//                "TRUE",
//                "WHILE",
//                "WRITE"
//        };
using namespace std;
using namespace boost::assign;
//void reverse(int num)
//{
//    int rev = 0, rem;
//    //int num = 123456;
//    while (num != 0)
//    {
//        rem = num % 10;
//        rev = rev * 10 + rem;
//        num /= 10;
//    }
//}
const string terminalStrings[] = { "id", "+", "*", "(", ")", "$", "e" };
const string tokenStrings[] = { "E", "E_", "T", "T_", "F" };

const map<string, terminal> stringForTer = map_list_of
        ("id", ID)("+", PLUS)("*", ASTERISK)
        ("(", LPAREN)(")", RPAREN);


#endif
