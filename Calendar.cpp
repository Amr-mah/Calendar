#include "Calendar.h"

Calendar::Calendar() {

}

void Calendar::menu() {
    bool run = true;
    while (run) {
        char selection;
        cout << "\nN - Next Month" << endl;
        cout << "P - Previous Month" << endl;
        cout << "M - Next Year" << endl;
        cout << "C - Previous Year" << endl;
        cout << "G - Go to Date " << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter Selection:";
        cin >> selection;
        switch(toupper(selection)) {
            case 'N':
                nextMonth();
                create();
                break;
            case 'P':
                previousMonth();
                create();
                break;
            case 'M':
                nextYear();
                create();
                break;
            case 'C':
                previousYear();
                create();
                break;
            case 'G':
                findDate();
                create();
                break;
            case 'Q':
                run = false;
                break;
            default:
                create();
                cout << "Invalid input" << endl;
                break;
        }
    }
}

void Calendar::create() {

    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    int year = currDate.getYear();
    int month = currDate.getMonth();

    cout << "\n_______ " << months[month-1];
    cout << " " << year << " _______" << endl;
    cout << "***************************" << endl;

    for (int i = 0; i < 7; i++) {//sizeof days / sizeof days[0]; i++) {
        cout << days[i] << " ";
    }
    cout << endl;

    int y = year - (month < 3);
    static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    int startDay;
    int d = 1;
    if (month == 2)
        d = 0;

    const int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    startDay = ((year + year / 4 - year / 100 + year / 400 + t[month - 1] + d) % 7);
    int dayCount = daysInMonth[month - 1];

    for (int i = 0; i < startDay; i++) {
        cout << "    ";
    }

    for (int i = 0; i < dayCount; i++) {
        if (i < 9)
            cout << "0" << i + 1 << "  ";
        else
            cout << i + 1 << "  ";
        startDay++;
        if (startDay == 7) {
            startDay = 0;
            cout << endl;
        }
    }
    cout << endl;
}

void Calendar::nextMonth() {
    currDate.incrementMonth();
}

void Calendar::previousMonth() {
    currDate.decrementMonth();
}

void Calendar::nextYear() {
    currDate.incrementYear();
}
void Calendar::previousYear() {
    currDate.decrementYear();
}

void Calendar::findDate() {
    int year, month, day;
    cout << "Enter Year:";
    cin >> year;
    cout << "Enter Month:";
    cin >> month;
    cout << "Enter Day:";
    cin >> day;

    currDate.setDate(year,month,day);
}