/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 18, 2018, 6:46 PM
 * Purpose: HW 4
 */

//Libraries Here
#include <iostream>//I/O Library
#include <cmath>//Math Library
using namespace std;

int main() 
{
    //Declare Variables Here
    double a, b;
    cout << "Enter the length a of a right-angled triangle.\n";
    cin >> a;//User input
    cout << "Enter the length b of a right-angled triangle.\n";
    cin >> b;//User input
    double calcH = sqrt(pow(a,2) + pow(b,2));//Program Execution Begins Here
    cout << "The hypotenuse of the right-angled triangle is: ";
    cout << calcH << endl;
    double calcP = a + b + calcH;
    cout << "The perimeter of the right-angled triangle is: ";
    cout << calcP;

    

    return 0;
}

