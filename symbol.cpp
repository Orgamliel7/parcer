//
// Created by dekel on 5/11/21.
//
#include "strings.h"
#include "symbol.h"

using namespace std;

int Symbol::getSymbol(){return symbol;}

void Word::printSymbol() const {
    //Since EPSILON is nothing
    if(symbol != EPSILON) {
        cout << terminalStrings[symbol] << " ";
    }
}

void Variable::printSymbol() const {
    cout << tokenStrings[symbol] << " ";
}