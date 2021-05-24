

#include <string>
#include "strings.h"
#include "parser.h"
#define SEPARATOR "| "
#define LINEDOWN cout << endl;

namespace MyStack
{
    struct Stack
    {
        std::string value;
        Stack* next;
    };

    Stack* tail = NULL;

    void        push(std::string);
    std::string pop();
    void        clear();
}

terminal DELETE;

void Parser::parse()
{
    int count = 0;
    using std::pair;

    terminal CREATE;
    terminal INSERT;
    terminal SELECT;
    if (match(CREATE) || match(INSERT)
        || match(DELETE) || match(SELECT)) {
        count++;
    } else if (match(END)) {
        count++;
    } else {
        cout << "";
    }
    for (int i = 0; i < 4; ++i) {


    terminal MINUS;
    terminal NUM;
    if (match(NUM) || match(ID)
        || match(PLUS) || match(MINUS)) {
        // bool -> comp
        break;
    }
    }





    stack.push_back(make_shared<Word>(Word(END))); // ההכנסה תמיד תהיה לתחתית המחסנית ולכן ניעזר במתודה פוש-בק
    stack.push_back(make_shared<Variable>(Variable(E))); // הפרסור יתחיל תמיד מחוק הגזירה הראשון

    shared_ptr<Symbol> simba = stack[stack.size()-1]; //סימבה הוא הטופ של המחסנית שלנו
    terminal terminal3 = nextToken(); //מייצג את הטוקן הנוכחי שלנו terminal3
    printLM();
    int jbl = 1;
    while(stack.size() > jbl)
    {
        // נבדוק אם הוא מופע של האובייקט מילה
        if(dynamic_cast<Word*>(simba.get()) != nullptr && simba->getSymbol() == terminal3)
        {
            stack.pop_back();
            terminal3 = nextToken();
            accepted.push_back(simba); // נכניס את הטוקן החדש שנגזר לתוך הרשימה
        }
        else if(simba->getSymbol() == EPSILON)
        {
            stack.pop_back();
            simba = stack[stack.size()-1];
            continue;
        }
        else if(dynamic_cast<Word*>(simba.get()) != nullptr || table[simba->getSymbol()][terminal3] == jbl-2)
        {
            cout << "syntax error" << endl;
            return;
        }
        else
            {
            stack.pop_back();
            int rule = table[simba->getSymbol()][terminal3];
            for (auto symbol = rules[rule].begin(); symbol != rules[rule].end(); ++symbol)
            {
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

void Parser::printLM()
{
    //  לאחר שתאושר ההדפסה נפריד | ורק אז המחסנית בלי הדולר sign
auto scar = accepted.begin();
    for (scar; scar != accepted.end(); ++scar)
    {
        (*scar)->printSymbol();
    }

    cout << SEPARATOR;
    auto timon = stack.rbegin();
    for (timon; timon != stack.rend()-1; ++timon)
    {
        (*timon)->printSymbol();
    }

    LINEDOWN //new line character and flush the stream
}

bool Parser::match(terminal terminal) {
    return false;
}
