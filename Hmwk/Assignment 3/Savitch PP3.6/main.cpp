/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 9:24 PM
 * Purpose:
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    double radius, weight;
    double gWater = 62.4;
    cout << "Enter in the radius of the object.\n";
    cin >> radius;
    cout << "Enter the weight of the object.\n";
    cin >> weight;
    double volume = (4 * 3.141592 * pow (radius, 3))/3;
    double bForce = volume * gWater;
    if (bForce >= weight) 
    { cout << "The object will float." << endl;}
    else 
    {cout << "The object will sink." << endl;} 
    
    
    
    


    return 0;
}

