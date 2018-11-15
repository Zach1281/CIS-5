/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 5:28 PM
 * Purpose: HW 5
 */

#include <iostream>
using namespace std;

float getLength(float length)
{
    do
    {
        cout << "Enter the rectangle's length.\n";
        cin >> length;
        if (length < 0)
        {
            cout << "Enter a non-negative value.\n";
        }
    }while (!(length > 0));
    return length;
}
float getWidth(float width)
{
    do
    {
        cout << "Enter the rectangle's width.\n";
        cin >> width;
        if (width < 0)
        {
            cout << "Enter a non-negative value.\n";
        }
    }while(!(width > 0));
    return width;
}
float getArea(float length, float width)
{
    float area = length * width;
    return area;
}
void displayData(float area)
{
    cout << "The rectangle's area is: " << area << ".\n";
}

int main()
{
    float length = 0, width = 0, area = 0;
    length = getLength(length);
    width = getWidth(width);
    area = getArea(length, width);
    displayData(area);
    
    return 0;
}
