/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 3, 2017, 11:07 AM
 * Purpose:  Book Club Points
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins
int main(int argc, char** argv) {
    //Declare all Variables
    int book; //Books purchased
    
    //Input or initialize values
    cout<<"Enter amount of books purchased: "<<endl;
    cin>>book; //Amount of books purchased
    
    //Process/Calculations
    
    //Output Located
    if (book == 0)
        cout<<"No purchase = No points"<<endl; //No points for no books
    else if (book == 1)
        cout<<"5 points earned from purchase!"<<endl; //5 points earned
    else if (book == 2)
        cout<<"15 points earned from purchase!"<<endl;//15 points earned
    else if (book == 3)
        cout<<"30 points earned from purchase!"<<endl;//30 points earned
    else if (book >= 4)
        cout<<"60 points earned from purchase!"<<endl;//60 points earned
    
    //Exit
    return 0;
}

