/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 16, 2018, 7:13 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    int speed, time;
    int x1 = 1;
    cout << "Enter your speed (mph/kph).\n";
    cin >> speed;
    cout << "Enter your hours traveled (h).\n";
    cin >> time;
    cout << "Hour   Distance Traveled (m/h)\n";
    cout << "------------------------\n";
    while (x1 <= time)
    {
        cout << x1 << "\t\t" << speed * x1 << endl;
        x1++;
    }
     return 0;
}

