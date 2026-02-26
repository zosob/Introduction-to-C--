/*Rectangle Area and Perimeter Calculator*/
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
const double SCALE_FACTOR = 2.0;
int main(){

    //Declare variables...
    double height, width, area, perimeter, diagonal, halfArea;


    // Program header...
    cout<<"Rectangle Calculator"<<endl;
    cout<<"---------------------"<<endl;


    //Prompt the user for width...
    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    //Prompt the user for height...
    cout<<"Enter the height of the rectangle: ";
    cin>>height;
    cout<<endl;

    // Perform calculations...
    area = width * height;
    perimeter = 2 *(width + height);
    diagonal = sqrt(pow(width,2) + pow(height,2));
    halfArea = area / SCALE_FACTOR;


    // Format output to 2 decimal places...
    cout<<fixed << setprecision(2);

    // Display results...
    cout<<"Results"<<endl;
    cout<<"-------"<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
    cout<<"Diagonal length: "<<diagonal<<endl;
    cout<<"Half the area: "<<halfArea<<endl;

    if(width==height){
        cout<<"This rectangle is actually a square."<<endl;
    } else {
        cout<<"This rectangle isn't actually a square."<<endl;
    }

    cout<<endl<<"Calculations completed!";

}