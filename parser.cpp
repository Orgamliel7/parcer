

#include <string>
#include "strings.h"
#include "parser.h"

void Parser::parse(){

    stack.push_back(make_shared<Word>(Word(END))); // ההכנסה תמיד תהיה לתחתית המחסנית ולכן ניעזר במתודה פוש-בק
    stack.push_back(make_shared<Variable>(Variable(E))); // הפרסור יתחיל תמיד מחוק הגזירה הראשון

    shared_ptr<Symbol> simba = stack[stack.size()-1]; //x is the Top of the stack
    terminal a = nextToken(); //a represents the current token
    printLM();
    int jbl = 1;
    while(stack.size() > jbl)
    { // נבדוק אם הוא מופע של האובייקט מילה
        if(dynamic_cast<Word*>(simba.get()) != nullptr && simba->getSymbol() == a)
        {
            stack.pop_back();
            a = nextToken();
            accepted.push_back(simba); // נכניס את הטוקן החדש שנגזר לתוך הרשימה
        }
        else if(simba->getSymbol() == EPSILON)
        {
            stack.pop_back();
            simba = stack[stack.size()-1];
            continue;
        }
        else if(dynamic_cast<Word*>(simba.get()) != nullptr || table[simba->getSymbol()][a] == jbl-2)
        {
            cout << "syntax error" << endl;
            return;
        }
        else{
            stack.pop_back();
            int rule = table[simba->getSymbol()][a];
            for (auto symbol = rules[rule].begin(); symbol != rules[rule].end(); ++symbol) {
                stack.push_back(*symbol);
            }
        }

        printLM();
        simba = stack[stack.size()-1];
    }
}

terminal Parser::nextToken ()
{
    string token;

    if(inputFile >> token)  //אם נשארה מילה, נקרא אותה לתוך טוקן
    {
        return stringForTer.at(token);
    }
    else{
        return END;
    }
}

void Parser::printLM(){
    //First print accepted, then | and then the stack (without $)
    for (auto symbol = accepted.begin(); symbol != accepted.end(); ++symbol) {
        (*symbol)->printSymbol();
    }

    cout << "| ";

    for (auto symbol = stack.rbegin(); symbol != stack.rend()-1; ++symbol) {
        (*symbol)->printSymbol();
    }

    cout << endl;
}
