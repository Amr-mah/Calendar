#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include <string>
#include <fstream>
using namespace std;


class Event {
private:
    Date date;
    string description;
public:
    void setEventDate(Date d);
    void setEventDescription(string d);
    void printEvent();
    void removeEvent();

};


#endif //EVENT_H
