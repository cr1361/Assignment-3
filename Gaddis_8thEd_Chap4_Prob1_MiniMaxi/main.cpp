/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 19, 2017, 11:21 AM
 *Purpose: C++ Template
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declares Variables
    int Number1,        //
            Number2;
  
    //Process the inputs
    cout<<"Enter number: "<<endl;
    cin>>Number1;
    cout<<"Enter another number: "<<endl;
    cin>>Number2;
    
    //Output the results
    cout<<""<<endl;
    if (Number1 < Number2)
        cout<<Number1<<" Is Smaller"<<endl;
    else
        cout<<Number1<<" Is Larger"<<endl;
    if (Number2 < Number1)
        cout<<Number2<<" Is Smaller"<<endl;
    else
        cout<<Number2<<" Is Larger"<<endl;
    cout<<""<<endl;
    if (Number1 == Number2)
        cout<<"Error numbers cannot be the same!"<<endl;
 
    //Exit stage right
    return 0;
}

