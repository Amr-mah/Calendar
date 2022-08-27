#ifndef CALENDAR_DATE_H
#define CALENDAR_DATE_H

#include <ctime>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Date {
public:
    Date();
    int getYear();
    int getMonth();
    int getDay();
    void incrementMonth();
    void decrementMonth();
    void incrementYear();
    void decrementYear();
    void setDate(int a, int b, int c);
    string toString() const;

private:
    int year;
    int month;
    int day;
};


#endif //CALENDAR_DATE_H
