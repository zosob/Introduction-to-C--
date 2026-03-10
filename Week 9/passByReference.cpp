#include<iostream>
using namespace std;
void convHrMin(int timeVal, int &hrVal, int &minVal);
void strSpaceToHyphen(string& modStr);
void toUpperCase(char str[]);
int main()
{
    char userWord[] = "hello";
    toUpperCase(userWord);
    cout<< userWord;
    return 0;
}

void convHrMin(int timeVal, int &hrVal, int &minVal){
    hrVal = timeVal / 60;
    minVal = timeVal % 60;
}


void toUpperCase(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
    }
}