// This is a program for printing hello world.

/*
    This is a multiline comment.
    You can write a lot more here.
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Hello World!";
    cout<<endl;
    cout<<endl;
    // Next I want to add two numbers...
    cout<<"This program will add, multiply and divide two numbers for you.";
    cout<<endl;
    int num1;
    int num2;
    cout<<"Enter num 1: ";
    cin>>num1;
    cout<<"Enter num 2: ";
    cin>>num2;

    // This is where we add the numbers...
    int sum;
    sum = num1 + num2;
    cout<<endl;
    cout<<"Sum of two numbers: ";
    cout<<sum;

    // This is where we multiply the numbers...
    cout<<"\nProduct of the two numbers is "<<num1*num2;
    cout<<endl;

    // This is where we divide the numbers...
    int divide;
    divide = num1 / num2;
    cout<<"\nDivision of the two numbers is "<<divide;

}
