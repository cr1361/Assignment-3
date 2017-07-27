/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 30, 2017, 4:37 AM
 *Purpose: Magic Dates
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nMonth,     //Month in numerical form
            nDay,   //Day of the Date
            nYear;  //Last two digits of the year
  
    //Initialize variables

    //Map inputs to outputs or process the data
    cout<<"Enter the Month: "<<endl;  //Month to be entered for equation
    cin>>nMonth;
    cout<<"Enter the Day: "<<endl;    //Day to be entered for equation
    cin>>nDay;
    cout<<"Enter last two digits of the Year: "<<endl; //The equation result
    cin>>nYear;
    
    //Process/Calculations Here
    
    
    //Output the transformed data
    cout<<""<<endl;
    if (nMonth*nDay==nYear)
        cout<<"Date is Magic!!"<<endl;
    if (nMonth*nDay!=nYear)
        cout<<"Date is not Magic."<<endl;
            
    //Exit stage right!
    return 0;
}