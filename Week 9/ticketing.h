#ifndef TICKETING_H
#define TICKETING_H

#include<string>
using namespace std;

double calculatePrice(double basePrice, double fee=10.0); //Default parameters...

double calculatePrice(double basePrice, string vipTier);

bool isValidSection(int section);


#endif