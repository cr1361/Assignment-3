/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 30, 2017, 3:55 AM
 *Purpose: Roman Numeral Converter
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int num1; //Number to be converted
    
    //Initialize variables
    cout<<"Enter a number I will convert it into a Roman Numeral: "<<endl;
    cin>>num1;

    //Map inputs to outputs or process the data
    
    //Process/Calculations Here
    
    //Output the transformed data
    cout<<""<<endl;
    if (num1 == 1)
        cout<<"I"<<endl;
    else if (num1 == 2)
        cout<<"II"<<endl;
    else if (num1 == 3)
        cout<<"III"<<endl;
    else if (num1 == 4)
        cout<<"IV"<<endl;
    else if (num1 == 5)
        cout<<"V"<<endl;
    else if (num1 == 6)
        cout<<"VI"<<endl;
    else if (num1 == 7)
        cout<<"VII"<<endl;
    else if (num1 == 8)
        cout<<"VIII"<<endl;
    else if (num1 == 9)
        cout<<"IX"<<endl;
    else if (num1 == 10)
        cout<<"X"<<endl;
    else
        cout<<"Invalid, number must be from 1 through 10.";
    
    //Exit stage right!
    return 0;
}