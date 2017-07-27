/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on July 3, 2017, 9:47 AM
 * Purpose:  Software Sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    float Disc1,    //Discount of 20 percent
            Disc2,  //Discount of 30 percent
            Disc3,  //Discount of 40 percent
            Disc4;  //Discount of 50 percent
    float Totl1,    //Total of equation with 20% off
            Totl2,  //Total of equation with 30% off
            Totl3,  //Total of equation with 40% off
            Totl4,  //Total of equation with 50% off
            Totl;   //Total of equation
    float cost,     //Cost of product sold
    Usold;          //Units sold
    
    //Input or initialize values
    cost=99.00f;
    Disc1=0.20f;
    Disc2=0.30f;
    Disc3=0.40f;
    Disc4=0.50f;
    
    //Map input and output
    cout<<"Enter Units Sold: "<<endl;
    cin>>Usold;
    
    //Process/Calculations
    Totl=cost*Usold;
    Totl1=((cost*Usold) - (cost*Usold)*Disc1);
    Totl2=((cost*Usold) - (cost*Usold)*Disc2);
    Totl3=((cost*Usold) - (cost*Usold)*Disc3);
    Totl4=((cost*Usold) - (cost*Usold)*Disc4);
    
    //Output Located 
    cout<<setprecision(2)<<fixed<<showpoint;
    if (Usold >= 10 && Usold <= 19)
        cout<<"Total $"<<Totl1<<endl;
    else if (Usold >= 20 && Usold <= 49)
        cout<<"Total $"<<Totl2<<endl;
    else if (Usold >= 50 && Usold <= 99)
        cout<<"Total $"<<Totl3<<endl;
    else if (Usold >= 100)
        cout<<"Total $"<<Totl4<<endl;
    else if (Usold == 0)
        cout<<"Invalid"<<endl;
    else
        cout<<"Total $"<<Totl<<endl;
    //Exit
    return 0;
}

