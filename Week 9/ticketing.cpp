#include <iostream>
#include "ticketing.h"

double calculatePrice(double basePrice, double fee){
    //Error checking
    if(basePrice<0) 
        return 0.0;
    double total = basePrice + fee;
    return total;
}

//Overloading function...

double calculatePrice(double basePrice, string vipTier){
    if(vipTier == "Backstage")   
        return basePrice + 500.0;
    if(vipTier == "FrontRow")
        return basePrice + 200.0;
    return basePrice; //Standard
}

bool isValidSection(int section){
    return (section >= 100 && section <= 500);
}