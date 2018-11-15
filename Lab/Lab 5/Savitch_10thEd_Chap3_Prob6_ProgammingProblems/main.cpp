/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 9:24 PM
 * Purpose:
 */

//Libraries Here
#include <iostream>//I/O Library
#include <math.h>//Math Library
using namespace std;

//Program Execution Begins Here
int main() 
{
    float radius, weight;//Declare Variables Here
    float gWater = 62.4;
    cout << "Enter in the radius of the object.\n";
    cin >> radius;//User Input
    cout << "Enter the weight of the object.\n";
    cin >> weight;
    double volume = (4 * 3.141592 * pow (radius, 3))/3;
    double bForce = volume * gWater;
    if (bForce >= weight) 
    { cout << "The object will float." << endl;}
    else 
    {cout << "The object will sink." << endl;}//Output 
    
    
    
    

//End
    return 0;
}

