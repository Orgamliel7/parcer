
#include "strings.h"
#include "symbol.h"
#include <iostream>
#define emptyString " "
#include <vector>
#include <map>
#include <string>


using namespace std;


    using std::vector;
    using std::string;
    using std::map;


    class RuntimeError : std::exception
            {
    public:
        RuntimeError(string _msg) : msg(_msg) {}
        ~RuntimeError() throw () {} // Updated
        const char *what() const throw()
        {
            return msg.c_str();
        }
    private:
        string msg;
    };




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