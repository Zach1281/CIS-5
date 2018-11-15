/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:05 PM
 * Purpose:
 */

//Libraries Here
#include <iostream>
using namespace std; //I/O Library

//Program Execution Here
int main() 
{
    float value;//Declare Variables
    cout << "Enter value in sales.\n";
    cin >> value;//Input values
    if (value<10000)
    { cout << "10% commission rate.\n" << endl;}
    else if (value>=10000 && value<15000)
    { cout << "15% commission rate.\n" << endl;}
    else if (value>=15000)
    { cout << "20% commission rate.\n" << endl;}//Output

//End
    return 0;
}

