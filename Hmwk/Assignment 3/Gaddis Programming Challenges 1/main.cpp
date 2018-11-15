/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:29 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    double x1, x2; 
    cout << "Enter two numbers.\n"; 
    cin >> x1 >> x2; 
    if (x1>x2)
    { cout << "The first number you entered is larger.\n" << endl;}
    else 
    { cout << "The second number you entered is larger.\n" << endl;}


    return 0;
}

