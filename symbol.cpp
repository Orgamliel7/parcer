
#include "strings.h"
#include "symbol.h"
//#include "reverse.h"
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


// נסיון חישוב זמן ריצה בשביל תוכניות בשפה בעתיד

int num = 1234567890;

    struct TIME1  // מבנה שיגדיר לנו זמן
    {
        int seconds;
        int minutes;
        int hours;
    };
struct TIME1 t1s = {213, 445, 2354};
struct TIME1 t2s = {352, 6543, 53442};
struct TIME1 t3s = {352, 6543, 53442};

////
//        ~TIME()
//        {
//           // delete seconds;
//         //   delete minutes;
//           // delete hours;
//            // traverse each element , delete them <----
//        }



    //cout << endl << "TIME DIFFERENCE: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    //cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    //cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
     struct TIME t1 = {213, 445, 2354};
     struct TIME t2 = {352, 6543, 53442};
     struct TIME t3 = {352, 6543, 53442};

    struct TIME difference = {54325, 43432, 54544};
//void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference)
//        {
//    for (int i = 0; i < 5; i++) {
//        if (t2.seconds > t1.seconds) {
//            --t1.minutes;
//            t1.seconds += 60;
//        }
//
//
//        difference->seconds = t1.seconds - t2.seconds;
//        if (t2.minutes > t1.minutes) {
//            --t1.hours;
//            t1.minutes += 60;
//        }
//        difference->minutes = t1.minutes - t2.minutes;
//        difference->hours = t1.hours - t2.hours;
//    }
//}
//computeTimeDifference(t1, t2, &difference);



//computeTimeDifference(t1, t2, &difference);



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