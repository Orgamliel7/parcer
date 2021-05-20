#ifndef PARSER_SYMBOL_H
#define PARSER_SYMBOL_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "enums.h"

class Symbol {
public:
    int symbol;
    Symbol(int s) : symbol(s){}
    int getSymbol();
    virtual void printSymbol() const = 0;
};


class Word : public Symbol
        {  // מחלקת הטרמינל עצמה
public:
    void printSymbol() const override;
    using Symbol::Symbol;  //בנאי יורש
};


class Variable : public Symbol // מחלקה לטיפוס שאינו טרמינל
        {
public:
    void printSymbol() const override;

    using Symbol::Symbol;  // בנאי יורש
};

#endif