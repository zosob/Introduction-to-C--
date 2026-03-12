#include<iostream>
#include "ticketing.h"
#include "ticketing.cpp"

int main()
{
    cout<<"---Campus Festival Ticketing---"<<endl;

    double general = calculatePrice(50.0);

    cout<<"General Admission: $"<<general<<endl;

  //Test function overload
    double vip = calculatePrice(50.0, "FrontRow");
    cout<<"VIP Admission: $"<<vip<<endl;

    //test error checking
    int userSection = 99;
    if(!isValidSection(userSection))
      cout<<"Error: Section "<<userSection<<" does not exist!"<<endl;
}
