#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ---------- VARIABLES ----------
    int hour;
    int minute;
    char colon;

    int dayType;                // 0 = weekday, 1 = weekend
    int users = 0;              // input value
    int totalEntries = 0;       // counter
    int freeEntries = 0;        // counter
    int paidEntries = 0;        // counter

    double usageFee;            // base fee
    double finalFee;            // fee after discounts
    double totalRevenue = 0.0;  // accumulator

    // ---------- INPUT ----------
    cout << "Enter day type (0 = weekday, 1 = weekend): ";
    cin >> dayType;

    cout << "Enter entry time (HH:MM): ";
    cin >> hour >> colon >> minute;

    // ---------- BASE FEE LOGIC ----------
    // Order of evaluation:
    // 1) dayType
    // 2) hour comparisons (top-down)
    if (dayType == 0) { // weekday

        if (hour <= 6) {
            usageFee = 1.50;
        }
        else if (hour > 6 && hour <= 9) {
            usageFee = 3.75;
        }
        else if (hour > 9 && hour <= 17) {
            usageFee = 2.25;
        }
        else {
            usageFee = 1.50;
        }
    }
    else { // weekend

        // OR condition
        if (hour < 8 || hour >= 20) {
            usageFee = 2.00;
        }
        else {
            usageFee = 3.25;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nBase usage fee: $" << usageFee << endl;

    // ---------- WHILE LOOP ----------
    // Sentinel-controlled loop
    cout << "\nEnter number of people (-1 to stop): ";
    cin >> users;

    while (users != -1) {

        // ---------- INPUT VALIDATION ----------
        if (users < 0) {
            cout << "Invalid number. Try again.\n";
            cout << "Enter number of people (-1 to stop): ";
            cin >> users;
            continue;
        }

        totalEntries++;

        // ---------- CONDITIONAL LOGIC ----------
        // AND, OR, <=, != used together
        if (users >= 3 && dayType == 0 && hour >= 7 && hour <= 9) {
            // Weekday morning group discount
            finalFee = usageFee * 0.5;
            paidEntries++;
        }
        else if (users >= 3 && dayType != 0) {
            // Weekend group = free
            finalFee = 0.0;
            freeEntries++;
        }
        else if (users == 1 || users == 2) {
            // Small group pays full price
            finalFee = usageFee;
            paidEntries++;
        }
        else {
            // Catch-all (defensive programming)
            finalFee = 0.0;
            freeEntries++;
        }

        // ---------- ACCUMULATOR ----------
        totalRevenue = totalRevenue + finalFee;

        // ---------- STATUS OUTPUT ----------
        cout << "Users: " << users
             << " | Fee charged: $" << finalFee
             << " | Running total: $" << totalRevenue << endl;

        cout << "\nEnter number of people (-1 to stop): ";
        cin >> users;
    }

    // ---------- FOR LOOP #1 ----------
    // Simple formatting loop
    for (int i = 0; i < 40; i++) {
        cout << "=";
    }
    cout << endl;

    // ---------- SUMMARY OUTPUT ----------
    cout << "SESSION SUMMARY\n";
    cout << "Total entries processed: " << totalEntries << endl;
    cout << "Paid entries: " << paidEntries << endl;
    cout << "Free entries: " << freeEntries << endl;

    // ---------- FOR LOOP #2 ----------
    // Visual bar chart using loops
    cout << "\nPaid Entries Bar: ";
    for (int i = 0; i < paidEntries; i++) {
        cout << "#";
    }
    cout << endl;

    cout << "Free Entries Bar: ";
    for (int i = 0; i < freeEntries; i++) {
        cout << "*";
    }
    cout << endl;

    // ---------- FOR LOOP #3 ----------
    // Demonstrates counting down
    cout << "\nClosing system in:\n";
    for (int i = 5; i >= 1; i--) {
        cout << i << "...\n";
    }

    // ---------- FOR LOOP #4 ----------
    // Demonstrates addition using a for loop and accumulator
    // Adds a $1 maintenance fee for each paid entry

    double maintenanceFee = 0.0;

    for (int i = 1; i <= paidEntries; i++) {
        maintenanceFee = maintenanceFee + 1.00;
    }

    cout << "\nMaintenance fees collected: $"<< maintenanceFee << endl;        
    // ---------- FINAL OUTPUT ----------
    cout << "\nTotal revenue collected: $"
         << totalRevenue << endl;

    return 0;
}
