/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 28, 2017, 10:36 PM
 *Purpose: Areas of Rectangles
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float lngt1,        //Lenght of the 1st Rectangle
            lngt2,      //Lenght of the 2nd Rectangle
            wdth1,      //Width of 1st Rectangle
            wdth2,      //Width of 2nd Rectangle
            Area1,      //Area of 1st Rectangle
            Area2;      //Area of 2nd Rectangle
    
    //Initialize variables

    //Map inputs to outputs or process the data
    cout<<"Enter lenght of Rectangle A:  "<<endl;
    cin>>lngt1;
    cout<<"Enter the width of Rectangle A: "<<endl;
    cin>>wdth1;
    cout<<"Enter the lenght of Rectangle B: "<<endl;
    cin>>lngt2;
    cout<<"Enter the width of Rectangle B: "<<endl;
    cin>>wdth2;
    
    //Process/Calculations Here
    Area1=lngt1*wdth1;
    Area2=lngt2*wdth2;
    
    //Output the transformed data
    cout<<""<<endl;
    if (Area1 > Area2)
        cout<<"Rectangle A has the greater Area."<<endl;
    else if (Area1 < Area2)
        cout<<"Rectangle B has the greater Area."<<endl;
    if (Area1 == Area2)
        cout<<"Area of Rectangle A and B is the same."<<endl;
    
    //Exit stage right!
    return 0;
}