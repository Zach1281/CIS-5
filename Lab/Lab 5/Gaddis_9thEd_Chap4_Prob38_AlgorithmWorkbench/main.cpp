/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:14 PM
 * Purpose:
 */

//Libraries Here
#include <iostream>//I/O Library 
using namespace std;

//Program Execution Begins Here
int main() 
{
    float hours;//Declare Variables
    cout << "Enter the number of hours.\n";
    cin >> hours;//Input
    if (hours>=0 && hours<=80)
    { cout << "The number is valid.\n" << endl;}
    else 
    { cout << "The number is not valid.\n" << endl;}//Output

//End
    return 0;
}

