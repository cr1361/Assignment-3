/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 3, 2017, 1:00 AM
 *Purpose: Time Calculator
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nSecs,     //Number of seconds to be calculated
            Mins,   //Seconds contained in a minute
            Hour,   //Seconds contained in an hour
            Days,   //Seconds contained in a day
            nMins,nHour,nDays;
  
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"Enter any amount of seconds: "<<endl;
    cin>>nSecs;
    
    //Process/Calculations Here
    nMins=(nSecs/60);
    nHour=(nSecs/3600);
    nDays=(nSecs/86400);
    
    //Output the transformed data
    if (nSecs >= 60 || nSecs >= 60)
        cout<<nMins<<" Mins"<<endl;
    else if (nSecs >= 3600)
        cout<<nHour/3600<<" Hours"<<endl;
    else if (nSecs >= 86400)
        cout<<nDays/86400<<" Days"<<endl;
    
    //Exit stage right!
        return 0;
}