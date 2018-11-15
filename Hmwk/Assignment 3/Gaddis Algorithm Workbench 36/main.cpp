/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:01 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    double number;
    cout << "Enter a number.\n";
    cin >> number; 
    if (number<=100)
    { cout << "Number is valid!" << endl;}
    else 
    { cout << "Number is not valid!" << endl;}


    return 0;
}

