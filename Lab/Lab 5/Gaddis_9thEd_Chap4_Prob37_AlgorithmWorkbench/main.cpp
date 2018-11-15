/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:11 PM
 * Purpose:
 */

//Libraries Here
#include <iostream>//I/O Library
using namespace std;

//Program Execution Begins Here
int main() 
{
    float temp;//Declare Variables
    cout << "Enter the a temperature.\n";
    cin >> temp;//Input
    if (temp>=-50 && temp<=150)
    { cout << "The number is valid.\n" << endl;}
    else 
    { cout << "The number is not valid.\n" << endl;}//Output

//End
    return 0;
}

