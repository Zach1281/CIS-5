/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:29 PM
 * Purpose: HW 3
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main() 
{
	//Set the random numbers seed
	//Declare all variables here
    float x1, x2; 
	//Input or initialize values here
    cout << "Enter two numbers.\n";//Process/Calculations Here 
    cin >> x1 >> x2; 
    if (x1>x2)
    { cout << "The first number you entered is larger.\n" << endl;}
    else 
    { cout << "The second number you entered is larger.\n" << endl;}

//Exit
    return 0;
}

