/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 8:13 PM
 * Purpose: HW 5
 */

#include <iostream>
#include <cmath>
using namespace std;

float kineticEnergy()
{
    float mass, velocity;
    do
    {
        cout << "Enter the mass of the object.\n";
        cin >> mass;
        if (mass < 0)
        {
            cout << "Enter a non-negative value.\n";
        }
    }while(!(mass > 0));
    cout << "Enter the velocity of the object.\n";
    cin >> velocity;
    
    return 0.5 * mass * pow(velocity, 2);
}

int main() 
{
    float kE = kineticEnergy();
    cout << "The kinetic energy of the object is " << kE << ".\n";
    return 0;
}

