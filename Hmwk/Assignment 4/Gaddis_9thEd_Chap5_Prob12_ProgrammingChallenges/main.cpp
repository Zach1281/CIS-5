/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 18, 2018, 4:38 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    int cel = 0;
    cout << "Celsius    Fahrenheit\n";
    cout << "---------------------\n";
    while (cel <= 20)
    {
        cout << "   " << cel << "\t\t" << (1.8 * cel) + 32 << endl;
        cel++;
    }
        
    


    return 0;
}

