#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hour;          // Hour of entry (24-hour format)
    int minute;        // Minute of entry
    int dayType;       // 0 = weekday, 1 = weekend
    int numPeople;     // Number of people in the car
    char colon;        // To read HH:MM format
    double rate;       // Hourly parking rate

    cout << "Enter time of entry (HH:MM): ";
    cin >> hour >> colon >> minute;

    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;

    cout << "Enter number of people in the vehicle: ";
    cin >> numPeople;

    // Determine base rate
    if (dayType == 0) { // Weekday rates
        if (hour < 7) {
            rate = 1.25;
        }
        else if (hour < 10) {
            rate = 3.50;
        }
        else if (hour < 18) {
            rate = 2.00;
        }
        else {
            rate = 1.25;
        }
    }
    else { // Weekend rates
        if (hour < 9) {
            rate = 1.50;
        }
        else if (hour < 17) {
            rate = 2.75;
        }
        else {
            rate = 2.00;
        }
    }

    // Carpool discount
    if (numPeople >= 3) {
        // Weekday morning discount
        if (dayType == 0 && hour >= 7 && hour < 10) {
            rate = rate * 0.5;
        }
        else {
            rate = 0.0;
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
