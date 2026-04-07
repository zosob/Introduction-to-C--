#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    istringstream inSS;
    string line;
    string firstName, lastName;
    int age;
    bool inputDone;

    inputDone = false;

    //Prompted the user...
    cout<<"Enter: First Name Last Name Age"<<endl;
    cout<<"(\"Exit\" as firstname exits)."<<endl<<endl;
    
    //Collecting data as long as "exit" is not entered...
    while(!inputDone){
        //Enter the line into the string line...
        getline(cin,line);
        
        inSS.clear();
        inSS.str(line);

        //Process the first name...
        inSS>>firstName;

        // Parse the value...
        if (firstName == "Exit"){
            cout<<"---Exiting.---"<<endl;
            inputDone = true;
        } else {
            inSS>>lastName;
            inSS>>age;

            cout<<firstName<<" "<<lastName<<" is "<<age<<" years old"<<endl;
        }
    }
}