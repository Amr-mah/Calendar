#ifndef CALENDAR_DATE_H
#define CALENDAR_DATE_H

#include <ctime>

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

private:
    int year;
    int month;
    int day;
};


#endif //CALENDAR_DATE_H
