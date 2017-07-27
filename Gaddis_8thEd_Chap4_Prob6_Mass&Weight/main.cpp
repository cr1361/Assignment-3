/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 1, 2017, 2:27 AM
 *Purpose: Mass and Weight
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int mass,           //Mass of an object
            NewtWgt;    //Wight in Newtons
    
    //Initialize variables

    //Map inputs to outputs or process the data
    cout<<"Enter Mass of an object: "<<endl;
    cin>>mass;
    
    //Process/Calculations Here
    NewtWgt=mass*9.5;  //Calculating Mass into Newtons
    
    //Output the transformed data
    cout<<""<<endl;
    cout<<"Weight = "<<NewtWgt<<" Newtons"<<endl;
    cout<<""<<endl;
    if (NewtWgt > 1000)
        cout<<"Object is too heavy.";
    else if (NewtWgt < 10)
        cout<<"Object is too light.";
    cout<<""<<endl;
    
    //Exit stage right!
    return 0;
}