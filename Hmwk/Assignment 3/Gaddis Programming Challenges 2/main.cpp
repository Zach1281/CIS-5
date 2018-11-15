/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:32 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    char x1;
    cout << "Enter a number between 1 and 10.\n";
    cin >> x1;
    switch (x1)
    {
        case '1': 
            cout << "I" << endl;
            break;
        case '2':
            cout << "II" << endl;
            break;
        case '3': 
            cout << "III" << endl;
            break;
        case '4': 
            cout << "IV" << endl;
            break;
        case '5': 
            cout << "V" << endl;
            break;
        case '6':
            cout << "VI" << endl;
            break;
        case '7': 
            cout << "VII" << endl;
            break;
        case '8':
            cout << "VIII" << endl;
            break;
        case '9':
            cout << "IX" << endl;
            break;
        case '10':
            cout << "X" << endl;
            break;
        default:
            cout << "Invalid input.\n";
        
    }


    return 0;
}

