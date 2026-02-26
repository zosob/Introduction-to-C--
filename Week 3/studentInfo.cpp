/* This program stores and prints student information and performs simple calculations*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    //Declare variables...
    string studentName;
    int studentAge;
    double creditsCompleted, studentGPA, creditsRemaining;


    //Assign values...
    studentName = "Bhaskar Ghosh";
    studentAge = 70;
    creditsCompleted = 100.5;
    studentGPA = 1.5;

    // Calculate the remaining credits (assume 120 to graduate)...
    creditsRemaining = 120 - creditsCompleted;

    // Print output...
    cout<<"Student Information"<<endl;
    cout<<"-------------------" <<endl;
    cout<<"Name: "<<studentName<<endl;
    cout<<"Age: "<<studentAge<<endl;
    cout<<"GPA: "<<studentGPA<<endl;
    cout<<"Credits Completed: "<<creditsCompleted<<endl;
    cout<<"Credits Remaining: "<<creditsRemaining<<endl;

    // Try to prompt the user to get the information that you will output...

}