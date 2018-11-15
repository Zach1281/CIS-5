/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 8, 2018, 9:34 PM
 * Purpose: Lab 1
 */

#include <iostream>
using namespace std;

int main() 
{
    float milBdgt = 7.0e11f;
    float fedBdgt = 4.094e12f;
    cout << "The US Military Budget is $700 Billion\n";
    cout << "The US Federal Budget is $4.1 Trillion\n";
    cout << "The US Military Budget as a percentage of the US Federal Budget:\n";
    cout << (milBdgt/fedBdgt) * 100 << "%";


    return 0;
}

