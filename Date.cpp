#include "Date.h"

Date::Date() {
    time_t t = time(0);
    struct tm *now = localtime(&t);
    year = now->tm_year + 1900;
    month = now->tm_mon + 1;
    day = now->tm_mday;
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

void Date::incrementMonth() {
    if (month < 12)
        month++;
    else {
        month = 1;
        year++;
    }
}

void Date::decrementMonth() {
    if (month > 1)
        month--;
    else {
        month = 12;
        year--;
    }
}

void Date::incrementYear() {
    year++;
}

void Date::decrementYear() {
    year--;
}

void Date::setDate(int a, int b, int c) {
    year = a;
    month = b;
    day = c;
}

string Date::toString() const{
    stringstream ss;
    ss << month << "/" << day << "/" << year;
    string str = ss.str();
    return str;
}
