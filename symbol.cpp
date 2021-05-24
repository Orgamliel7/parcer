
#include "strings.h"
#include "symbol.h"
#include <iostream>
#define emptyString " "

using namespace std;




int Symbol::getSymbol()
{
    return symbol;
}

void Word::printSymbol() const
{
    if(symbol != EPSILON)
    { // אפסילון מייצג כלום אז אם סימבול מכיל משהו
        cout << terminalStrings[symbol] << emptyString;
    }
}

void Variable::printSymbol() const
{
    cout << tokenStrings[symbol] << emptyString;
}