/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 18, 2018, 6:39 PM
 * Purpose: HW 4
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b;
    cout << "Enter the length a for a right-angled triangle.\n";
    cin >> a;
    cout << "Enter the length b for a right-angled triangle.\n";
    cin >>b;
    double calcH = sqrt(pow(a,2) + pow(b,2));
    cout << "The hypotenuse of the right-angled triangle is: ";
    cout << calcH << endl;


    return 0;
}

