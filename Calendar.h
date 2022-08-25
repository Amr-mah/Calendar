#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H

#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

class Calendar {

public:
    Calendar();
    void menu();
    void create();
    void nextMonth();
    void previousMonth();
    void nextYear();
    void previousYear();
    void findDate();

private:
    Date currDate;

};


#endif //CALENDAR_CALENDAR_H
