/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 2, 2017, 8:58 PM
 *Purpose: Color Mix
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
#include <string>
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    string Color,Color2; //Primary Colors used
    
    //Initialize variables
    cout<<"Enter 2 different primary colors: "<<endl;
    cin>>Color>>Color2; //2 Colors to be placed for output
    
    //Map inputs to outputs or process the data
    
    //Process/Calculations Here
    
    //Output the transformed data
    if ((Color == "red" && Color2 == "blue")||
            (Color2 == "red" && Color == "blue"))
        cout<<"purple";
    else if ((Color == "red" && Color2 == "yellow")||
            (Color2 == "red" && Color == "yellow"))
        cout<<"orange"; 
    else if ((Color == "blue" && Color2 == "yellow")||
            (Color2 == "blue" && Color == "yellow"))
        cout<<"green";
    else cout<<"Incorrect Color input"<<endl;
    
    //Exit stage right!
    return 0;
}