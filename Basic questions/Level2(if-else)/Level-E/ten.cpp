//Take a year and print the corresponding century (e.g., “19th century”, “20th century”) 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year <= 0) {
        cout << "Please enter a valid year greater than 0." << endl;
        return 0;
    }

    // Calculate century
    int century = (year + 99) / 100;

    // Determine the correct ordinal suffix (st, nd, rd, th)
    string suffix = "th";
    if (century % 100 != 11 && century % 10 == 1) suffix = "st";
    else if (century % 100 != 12 && century % 10 == 2) suffix = "nd";
    else if (century % 100 != 13 && century % 10 == 3) suffix = "rd";

    cout << century << suffix << " century" << endl;

    return 0;
}
