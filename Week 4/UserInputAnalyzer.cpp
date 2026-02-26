#include <iostream>
#include <string>
#include <cmath>   // For floating-point comparison
using namespace std;

int main() {

    cout << "=== User Input Analyzer ===" << endl << endl;

    // --------------------------------------------------
    // 3.12 Boolean Data Type
    // --------------------------------------------------
    bool isAdmin = false;
    bool hasAccess = true;

    cout << "Boolean values:" << endl;
    cout << "isAdmin: " << isAdmin << endl;
    cout << "hasAccess: " << hasAccess << endl << endl;

    // --------------------------------------------------
    // 3.10 Order of Evaluation
    // --------------------------------------------------
    int a = 10;
    int b = 5;
    int c = 2;

    int result1 = a + b * c;       // Multiplication happens first
    int result2 = (a + b) * c;     // Parentheses change evaluation order

    cout << "Order of Evaluation:" << endl;
    cout << "a + b * c = " << result1 << endl;
    cout << "(a + b) * c = " << result2 << endl << endl;

    // --------------------------------------------------
    // 3.11 Switch Statements
    // --------------------------------------------------
    int menuChoice;
    cout << "Enter a menu choice (1–3): ";
    cin >> menuChoice;

    switch (menuChoice) {
        case 1:
            cout << "You chose Option 1" << endl;
            break;
        case 2:
            cout << "You chose Option 2" << endl;
            break;
        case 3:
            cout << "You chose Option 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    cout << endl;

    // Clear newline left in input buffer before getline
    cin.ignore();

    // --------------------------------------------------
    // 3.13 String Comparisons
    // --------------------------------------------------
    string role;
    cout << "Enter your role (admin / user / guest): ";
    getline(cin, role);

    if (role == "admin") {
        cout << "Full system access granted." << endl;
    } else if (role != "guest") {
        cout << "Standard user access." << endl;
    } else {
        cout << "Limited guest access." << endl;
    }
    cout << endl;

    // --------------------------------------------------
    // 3.14 String Access Operations
    // --------------------------------------------------
    cout << "First character of role: " << role[0] << endl;
    cout << "Last character of role: "
         << role[role.length() - 1] << endl << endl;

    // --------------------------------------------------
    // 3.15 Character Operations
    // --------------------------------------------------
    char firstChar = role[0];

    if (isalpha(firstChar)) {
        cout << "First character is a letter." << endl;
    }

    cout << "Uppercase version: "
         << static_cast<char>(toupper(firstChar)) << endl << endl;

    // --------------------------------------------------
    // 3.16 Finding, Inserting, and Replacing Text in a String
    // --------------------------------------------------
    int pos = role.find("ad");

    if (pos != string::npos) {
        cout << "\"ad\" found at position " << pos << endl;
    } else {
        cout << "\"ad\" not found in role." << endl;
    }

    role.insert(0, "[ROLE] ");
    cout << "After insert: " << role << endl;

    role.replace(0, 6, "[USER]");
    cout << "After replace: " << role << endl << endl;

    // --------------------------------------------------
    // 3.17 Conditional Expressions (Ternary Operator)
    // --------------------------------------------------
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Status: " << status << endl << endl;

    // --------------------------------------------------
    // 3.18 Floating-Point Comparison
    // --------------------------------------------------
    double x = 0.1 + 0.2;
    double y = 0.3;

    const double EPSILON = 0.000001;

    if (fabs(x - y) < EPSILON) {
        cout << "x and y are approximately equal." << endl;
    } else {
        cout << "x and y are NOT equal." << endl;
    }
    cout << endl;

    // --------------------------------------------------
    // 3.19 Short-Circuit Evaluation
    // --------------------------------------------------
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Second condition only evaluated if first is true
    if (number != 0 && (100 / number) > 2) {
        cout << "Valid number and division result > 2" << endl;
    } else {
        cout << "Short-circuit prevented division or condition failed." << endl;
    }

    cout << endl << "=== End of Program ===" << endl;

    return 0;
}
