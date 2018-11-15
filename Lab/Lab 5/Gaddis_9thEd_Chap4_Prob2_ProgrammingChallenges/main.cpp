/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:32 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //I/O Library
using namespace std;

//User Library Here

//Global Constants Ony, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main() 
{
    char x1; //Declare Variables Here
    cout << "Enter a number between 1 and 10.\n";
    cin >> x1;//User input
    switch (x1)//Menu
    {
        case '1': //Output
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

//End
    return 0;
}

