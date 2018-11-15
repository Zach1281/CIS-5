/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 18, 2018, 6:57 PM
 * Purpose: HW 4
 */

//Libraries Here
#include <iostream>//I/O Library
#include <cmath>//Math Library
using namespace std;


int main() 
{
    //Declare Variables Here
    char choice;
    double G = 6.673 * pow(10,-8);
    double m1, m2, d;
    do{//Loop Begins Here
        cout << "Enter the mass of object 1 (in grams).\n";//Program Execution Here
        cin >> m1;//User Input
        cout << "Enter the mass of object 2 (in grams).\n";
        cin >> m2;
        cout << "Enter the distance between the two objects (in cm).\n";
        cin >> d;
        cout << "The gravitational force is between the two objects is: ";
        cout << (G * m1 * m2)/(pow(d,2)) << " dynes." << endl;//Calculation here
        cout << "Do you wish to compute again? Y/N\n";
        cin >> choice;
    }while ((choice == 'Y') || (choice == 'y'));//Loop Ends Here
 
    

//End 
    return 0;
}

