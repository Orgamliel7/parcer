#ifndef PARSER_SYMBOL_H
#define PARSER_SYMBOL_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "enums.h"

class Symbol {
protected:
    int symbol;
public:
    Symbol(int s) : symbol(s){}
    int getSymbol();
    virtual void printSymbol() const = 0;
};

//Terminal
class Word : public Symbol{
public:
    void printSymbol() const override;
    //Inherit ctor
    using Symbol::Symbol;
};

//Non-terminal
class Variable : public Symbol {
public:
    void printSymbol() const override;
    //Inherit ctor
    using Symbol::Symbol;
};

#endif //PARSER_SYMBOL_H