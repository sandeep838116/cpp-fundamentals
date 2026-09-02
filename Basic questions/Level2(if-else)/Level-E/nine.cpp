// Take two dates (day and month) and determine which one comes first in the calendar.
#include <iostream>
using namespace std;
int main()
{
    int day1, month1, day2, month2;
    cout << "Enter the day1: ";
    cin >> day1;
    cout << "Enter the month1: ";
    cin >> month1;
    cout << "Enter the day2: ";
    cin >> day2;
    cout << "Enter the month2: ";
    cin >> month2;

    if (day1 < 1 || day1 > 31 || month1 < 1 || month1 > 12 || day2 < 1 || day2 > 31 || month2 < 1 || month2 > 12)
    {
        cout << "Enter a valid date.";
    }
    else if ((day1 > 28 && month1 == 2) || (day2 > 28 && month2 == 2) || (day1 > 30 && (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)) || (day2 > 30 && (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)))
    {
        cout << "Enter a valid date.";
    }
    else
    {
        if (month1 < month2)
            cout << "Day1 and Month1(first date) comes first.";
        else if (month2 < month2)
            cout << "Day2 and month2(second) comes first.";
        else
        {
            if (day1 < day2)
                cout << "Day1 and Month1(first date) comes first.";
            else if (day2 < day1)
                cout << "Day2 and month2(second) comes first.";
            else
                cout << "Same date";
        }
    }
}