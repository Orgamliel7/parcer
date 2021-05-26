

#include <string>
#include <cstring>
#include "strings.h"
#include "parser.h"
#define SEPARATOR "| "
#define EMPTYSTRING ""
#define ERROR cout << "syntax error" << endl;
#define LINEDOWN cout << endl;


struct Rectangle
        {
    int width;  // member variable
    int height; // member variable
    char *ptr_name;
    //...

    Rectangle(char const *ptr_name_, int width_, int height_)
            :
            width(width_),
            height(height_),
            ptr_name(nullptr) {
        set_name(ptr_name_);
    }

    ~Rectangle() {
        if (ptr_name) delete[] ptr_name;
        ptr_name = nullptr;
    }

    void set_name(char const *ptr_name_)
    {
        if (ptr_name) delete[] ptr_name;
        int name_length = strlen(ptr_name_) + 1;
        ptr_name = new char[name_length];
        strncpy(ptr_name, ptr_name_, name_length);
    }
};
// struct Rectangle







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
        || match(DELETE) || match(SELECT))
    {
        count++;
    } else if (match(END))
    {

        count++;
    } else
        {
        cout << EMPTYSTRING;
    }
    for (int i = 0; i < 4; ++i)
    {


    terminal MINUS;
    terminal NUM;
    if (match(NUM) || match(ID)
        || match(PLUS) || match(MINUS))

    {
        // bool -> comp
        break;
    }
    }



    stack.push_back(make_shared<Word>(Word(END))); // ההכנסה תמיד תהיה לתחתית המחסנית ולכן ניעזר במתודה פוש-בק
    stack.push_back(make_shared<Variable>(Variable(E))); // הפרסור יתחיל תמיד מחוק הגזירה הראשון
    int one = 1;
    shared_ptr<Symbol> simba = stack[stack.size()-one]; //סימבה הוא הטופ של המחסנית שלנו
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
            ERROR
            return;
        }
        else
            {
            stack.pop_back();
            int Obey = table[simba->getSymbol()][terminal3];
            for (auto symbol = rules[Obey].begin(); symbol != rules[Obey].end(); ++symbol)
            {
                stack.push_back(*symbol);
            }
        }

        printLM();
        simba = stack[stack.size()-jbl];
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

bool Parser::match(terminal terminal)
{
    return false;
}
