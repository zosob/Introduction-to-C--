#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hour;
    int minute;
    int dayType;       // 0 = weekday, 1 = weekend
    int numPeople;
    char colon;
    double rate;

    cout << "Enter time of entry (HH:MM): ";
    cin >> hour >> colon >> minute;

    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;

    cout << "Enter number of people in the vehicle: ";
    cin >> numPeople;

    // Determine base rate
    if (dayType == 0) {   // weekday

        // Using <= and AND (&&)
        if (hour >= 0 && hour <= 6) {
            rate = 1.25;
        }
        else if (hour > 6 && hour <= 9) {
            rate = 3.50;
        }
        else if (hour > 9 && hour <= 17) {
            rate = 2.00;
        }
        else {
            rate = 1.25;
        }
    }
    else if (dayType != 0) { // weekend or holiday (using !=)

        // Using OR (||)
        if (hour < 9 || hour >= 20) {
            rate = 1.50;
        }
        else if (hour >= 9 && hour <= 16) {
            rate = 2.75;
        }
        else {
            rate = 2.00;
        }
    }

    // Carpool discount logic
    if (numPeople >= 3) {

        // AND (&&), <=, != all in one condition
        if (dayType == 0 && hour >= 7 && hour <= 9 && minute != 0) {
            rate = rate * 0.5;
        }
    }

    // Output formatted time
    cout << "Parking rate at ";

    if (hour == 0) {
        cout << "12:";
    }
    else if (hour <= 12) {
        cout << hour << ":";
    }
    else {
        cout << hour - 12 << ":";
    }

    cout << setw(2) << setfill('0') << minute;

    if (hour < 12) {
        cout << " am";
    }
    else {
        cout << " pm";
    }

    cout << " is $" << fixed << setprecision(2) << rate << " per hour" << endl;

    return 0;
}
