#include <iostream>
#include <ctime>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() = default;
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void getDate(int day, int month, int year, int type)
    {
        string months[] = {"january",
                           "february",
                           "march",
                           "april",
                           "may",
                           "june",
                           "july",
                           "august",
                           "september",
                           "october",
                           "november",
                           "december"};
        if (type == 1)
        {
            cout << day << "-" << months[month - 1].substr(0, 3) << endl;
        }
        else if (type == 2)
        {
            cout << day << "-" << months[month - 1] << "-" << year << endl;
        }
        else if (type == 3)
        {
            cout << day << "/" << month << "/" << year << endl;
        }
        else if (type == 4)
        {
            cout << day << "/" << month << endl;
        }
    }
    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    void getCurrentDay()
    {
        // Todo lo de esta funcion lo saque de internet porque
        // no se como funciona la libreria de ctime
        // Declaring argument for time()
        time_t tt;

        // Declaring variable to store return value of
        // localtime()
        struct tm *ti;

        // Applying time()
        time(&tt);

        // Using localtime()
        ti = localtime(&tt);

        cout << "Current Day, Date and Time is = " << asctime(ti);
    }
};

int main()
{
    Date date1 = Date(14, 3, 2020);
    date1.getDate(date1.getDay(), date1.getMonth(), date1.getYear(), 1);
    date1.getDate(date1.getDay(), date1.getMonth(), date1.getYear(), 2);
    date1.getDate(date1.getDay(), date1.getMonth(), date1.getYear(), 3);
    date1.getDate(date1.getDay(), date1.getMonth(), date1.getYear(), 4);
    date1.getCurrentDay();
    return 0;
}