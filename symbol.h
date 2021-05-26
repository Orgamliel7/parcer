#ifndef PARSER_SYMBOL_H
#define PARSER_SYMBOL_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "enums.h"

struct TIME
        {
public:
    int seconds;
    int minutes;
    int hours;
    //void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference);
    //void computeTimeDifference(TIME t1, TIME t2, TIME *difference);

    void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference)
    {
        for (int i = 0; i < 5; i++) {
            if (t2.seconds > t1.seconds) {
                --t1.minutes;
                t1.seconds += 60;
            }


            difference->seconds = t1.seconds - t2.seconds;
            if (t2.minutes > t1.minutes) {
                --t1.hours;
                t1.minutes += 60;
            }
            difference->minutes = t1.minutes - t2.minutes;
            difference->hours = t1.hours - t2.hours;
        }
    }

        };





class Symbol
        {
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