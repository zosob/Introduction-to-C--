#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    // --------------------------------------------------
    // 2.15 Strings
    // --------------------------------------------------
    string fullName, firstName;
    //cout<<"\nPlease enter your first name: ";
    //cin>>firstName;

    //cout<<"\nYour first name using cin is: "<<firstName;
    //cin leaves a newline character that needs to be removed...
    //cin.ignore();

    //cout<<"\n\nPlease enter your full name: ";
    //getline(cin, fullName);

    //cout<<"\n\nYour full name is: "<<fullName;

    // --------------------------------------------------
    // 2.16 Integer Overflow
    // --------------------------------------------------
    
    int maxInt = 2147483647; // Maximum value for 32-bit int

    // maxInt = maxInt + 1; //Overflow Error!

    // --------------------------------------------------
    // 2.17 Numeric Data Types
    // --------------------------------------------------
    
    int age=20;
    double gpa = 3.75;
    char grade = 'A';
    bool isEnrolled = true;


    // --------------------------------------------------
    // 2.18 Unsigned
    // --------------------------------------------------
    
    unsigned int score = 10;
    //cout<<"\nScore: "<<score<<endl;

    // --------------------------------------------------
    // 2.19 Random Numbers
    // --------------------------------------------------
    srand(time(0)); //Seed random number generator(do once)
    int randomNumber = rand() % 200 + 1; 
    //cout<<"\nRandom Number: "<<randomNumber<<endl;

    // --------------------------------------------------
    // 2.20 Debugging
    // --------------------------------------------------
    
    int x = 5, y = 0;

    //cout<< x / y <<endl;
   

    // --------------------------------------------------
    // 2.21 auto (C++11)
    // --------------------------------------------------
   
    auto totalCredits = 15; //int
    auto tuition = 3000.55; //double
    auto status = true; //bool

    // --------------------------------------------------
    // 2.22 Style Guidelines
    // --------------------------------------------------
    
    // - Use meaningful variable names
    // - One statement per line
    // - Consistent indentation
    // - Useful comments


    /* Salary Calculations*/
/*
    //Variable declarations...
    string employeeName;
    int hoursWorked;
    double hourlyWage, employeePay;

    //Input prompts...
    cout<<"\n Welcome to the Salary Calculator!!\n\n";
    cout<<"\nPlease enter the full name of your employee: ";
    getline(cin, employeeName);
    cout<<endl;
    cout<<"\nHow many hours did they work? \nHours: ";
    cin>>hoursWorked;
    cout<<"\nHourly wage? \nWage: ";
    cin>>hourlyWage;

    //Calculations...
    employeePay = hoursWorked * hourlyWage;

    //Outputs...

    cout<<endl<<endl;
    cout<<"Name of the employee: "<<employeeName<<endl;
    cout<<"Hours worked: "<<hoursWorked<<" hours"<<endl;
    cout<<"Hourly wage: $"<<hourlyWage<<endl;
    cout<<"Weekly salary: $"<<employeePay<<endl;
    cout<<"Thank you for using the salary calculator!";


*/
    

    /* Names and ages of 3 of your friends... Ask user for their own name and age. Then ask user for the name and age of 3 of their friends. Store name and age in variables, and print it in a formatted way.
    
    Example: (all names and ages are fictional)
    Hello Chandra! You are 20 years old.
    The name of your three friends are:
    Name: Suzzane Greene
    Age: 19
    .
    .
    .
    And the list goes on.
    */

    return 0;
}
