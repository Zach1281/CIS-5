/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on December 3, 2018, 4:57 PM
 * Purpose: HW 7
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct data
{
    string name;
    double amt;
};

void getdata(data[], int);
void displayreport(data[], int);
void selectionsort(data[], int);

int main() 
{
    int months = 12;
    data rainfall[months] = {"January" , 0, "February", 0, "March", 0, "April", 0, "May", 0, "June", 0, "July", 0, "August", 0, "September", 0, "October", 0, "November", 0, "December", 0};
    getdata(rainfall, months);
    selectionsort(rainfall, months);
    displayreport(rainfall, months);
    
    return 0;
}

void getdata(data rainfall[], int months)
{
    double inches;
    
    cout << "Enter the total inches of rainfall for each month.\n";
    
    for(int i = 0; i < months; i++)
    {
        do
        {
            cout << "Month " << (i + 1) << ": ";
            cin >> inches;
            if (inches < 0)
            {
                cout << "Enter a non-negative number.\n";
            }
        }while (!(inches < 0));
        rainfall[i].amt = inches;
    }
}

void selectionsort(data array[], int size)
{
    data temp;
    bool swap;
    do
    {
        swap = false;
        for(int count = 0; count < (size - 1); count++)
        {
            if (array[count].amt < array[count + 1].amt)
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    }while(swap);
}

void displayreport(data r[], int s)
{
    cout << "Rainfall Report\n";
    cout << "Month" << "\t" << "Inches\n";
    cout << "-------------------\n";
    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < s; i++)
    {
        cout << "\t\t" << left << setw(9) << r[i].name << "\t" << r[i].amt << endl;
    }
}

