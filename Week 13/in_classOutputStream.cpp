#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

string produceSavingsTable(double startAmount, double apr, int numYears);

int main(){
    string table;
    double startAmount, apr;
    int years;

    //Prompt user for values...
    cout<<"Starting amount?"<<endl;
    cin>>startAmount;
    cout<<"Annual Percentage Rate?"<<endl;
    cin>>apr;
    cout<<"Number of years?"<<endl;
    cin>>years;

    cout<<endl<<"Savings over time: "<<endl;
    table = produceSavingsTable(startAmount, apr, years);
    cout<<table<<endl;
}

string produceSavingsTable(double startAmount, double apr, int numYears){

    // Set column width...
    const int YEAR_COL_WIDTH = 5;
    const int BALANCE_COL_WIDTH = 10;

    ostringstream outSS;
    double interest, balance = startAmount;
    int month, totalMonths = numYears * 12;

    // Convert APR to monthly percentage rate...
    double mpr = apr / 12 * 0.01;

    //Display 2 decimal places...
    outSS << fixed << setprecision(2);

    //Table headings...
    outSS<<setw(YEAR_COL_WIDTH)<<"Year" << setw(BALANCE_COL_WIDTH)<<"Balance"<<endl;

    for (month = 1; month <= totalMonths; ++month){
        interest = balance * mpr;
        balance += interest;

        if(month % 12 == 0){
            outSS<< setw(YEAR_COL_WIDTH)<<month / 12 << setw(BALANCE_COL_WIDTH)<<balance <<endl;
        }
    }

    //Return the table as a string...
    return outSS.str();
}
/*Right now, the program tells us the balance at the end of each year.
But suppose a customer asks: How much of that money is interest, not just the original amount?
Modify the table so it shows total interest earned so far.

 Year   Balance   Interest
    1   1051.16      51.16
    2   1104.94     104.94
    3   1161.47     161.47
*/