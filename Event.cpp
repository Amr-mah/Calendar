#include "Event.h"


void Event::setEventDate(Date d) {
    date = d;
}

void Event::setEventDescription(string d) {
    description = d;
}

void Event::printEvent() {
    ofstream file;
    file.open("Events.txt", fstream::app);
    file << date.toString() << ": " << description << endl;
}

void Event::removeEvent() {
    string eventString = date.toString() + ": " + description;

    string line;
    ifstream file;
    file.open("Events.txt", fstream::app);
    ofstream temp;
    temp.open("temp.txt");
    bool isFound = false;

    while (getline(file,line)) {
        if (line == eventString) {
            isFound = true;
            cout << "Event removed" << endl;
        }
        if (line != eventString)
            temp << line << endl;
    }
    temp.close();
    file.close();
    string fileName = "Events.txt";
    const char* p = fileName.c_str();
    remove(p);
    rename("temp.txt", p);

    if (!isFound)
        cout << "Event was not found" << endl;

}