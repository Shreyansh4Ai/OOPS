#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

class Calendar {
private:
    int year;
    static const string months[12];
    static const int daysInMonth[12];

    bool isLeap(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int getWeekday(int y, int m) const {
        tm time_in = { 0, 0, 0, 1, m, y - 1900 };
        time_t time_temp = mktime(&time_in);
        tm const *time_out = localtime(&time_temp);
        return time_out->tm_wday;
    }

    void printMonth(int m) const {
        cout << "  " << months[m] << " " << year << endl;
        cout << "Su Mo Tu We Th Fr Sa" << endl;

        int days = daysInMonth[m];
        if (m == 1 && isLeap(year)) days = 29;

        int startDay = getWeekday(year, m);

        for (int i = 0; i < startDay; ++i)
            cout << "   ";

        for (int day = 1; day <= days; ++day) {
            cout << setw(2) << day << " ";
            if ((startDay + day) % 7 == 0)
                cout << endl;
        }
        cout << endl << endl;
    }

public:
    Calendar(int y) : year(y) {}

    void printYear() const {
        for (int m = 0; m < 12; ++m) {
            printMonth(m);
        }
    }
};

const string Calendar::months[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

const int Calendar::daysInMonth[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year = 1900 + ltm->tm_year;

    Calendar cal(year);
    cal.printYear();

    return 0;
}