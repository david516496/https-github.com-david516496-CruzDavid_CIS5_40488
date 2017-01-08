/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Calculate Paycheck
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd // Hours worked in (hrs)
            payRate // Pay rate in $'s/hr
            payChck // pay check in $'s
    
    //Input values 
    cout<<"This program calculates paycheck"<<endl;
    cout<<"Hours worked and pay rate are required"<<endl;
    cout<<"Input your hours worked in hours"<<endl;
    cin>>hrsWrkd;
    cout<<"Input payrate in $'s/hr<<endl"<<endl;
    cin>>payRate;
    
    //Process by mapping inputs to outputs
    payChck=payRate*hrsWrkd;
    
    //Output
    cout<<"Your Paycheck = $"<<payChck<<endl;

    //Exit
    return 0;
}

