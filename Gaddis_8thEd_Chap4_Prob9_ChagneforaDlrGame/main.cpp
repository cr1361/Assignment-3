/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 2, 2017, 9:49 PM
 *Purpose: Change for a Dollar Game
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float pennies,   //Amount of pennies
            nickels, //Amount of Nickels
            dimes,   //Amount of Dimes
            quarter, //Amount of Quarters
            total;   //Total of $1.00 to equal
  
    //Initialize variables

    //Map inputs to outputs or process the data
    cout<<"Enter number of pennies: "<<endl;
    cin>>pennies;                           //Pennies entered
    cout<<"Enter number of nickels: "<<endl;
    cin>>nickels;                           //Nickels Entered
    cout<<"Enter number of dimes: "<<endl;
    cin>>dimes;                             //Dimes Entered
    cout<<"Enter number of quarter: "<<endl;
    cin>>quarter;                           //Quarters Entered
    
    //Process/Calculations Here
    total=(pennies*0.01)+(nickels*0.05)+(dimes*0.10)+(quarter*0.25);
    
    //Output the transformed data
    if (total == 1.00)
        cout<<"Congratulations!!"<<endl;
    else cout<<"Try again"<<endl;
    
    //Exit stage right!
    return 0;
}