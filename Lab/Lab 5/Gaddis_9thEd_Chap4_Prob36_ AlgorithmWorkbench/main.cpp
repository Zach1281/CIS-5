/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:01 PM
 * Purpose:
 */

//Libraries
#include <iostream>//I/O library
using namespace std;

//Program Execution Begins Here
int main() 
{
    float number;//Declare variables
    cout << "Enter a number.\n";
    cin >> number; //Input
    if (number<=100)
    { cout << "Number is valid!" << endl;}
    else 
    { cout << "Number is not valid!" << endl;}
//Output

//End
    return 0;
}

