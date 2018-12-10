/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on December 9, 2018, 7:31 PM
 * Purpose: HW 8
 */

#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yRel;
    int runTime;
    float pCost;
    float rev;
};

int main() 
{
    MovieData x0;
    MovieData x1;
    
    cout << "Person 1, enter the following data.\n";
    cout << "Enter the title of the movie.\n";
    getline(cin, x0.title);
    cout << "Enter the director of the movie.\n";
    getline(cin, x0.director);
    cout << "Enter the movie's release year.\n";
    cin >> x0.yRel;
    cout << "Enter the movie's runtime(in minutes).\n";
    cin >> x0.runTime;
    cout << "Enter the movie's production costs.\n";
    cin >> x0.pCost;
    cout << "Enter the movie's first-year revenue.\n";
    cin >> x0.rev;
    
    cout << "Person 2, enter the following data.\n";
    cout << "Enter the title of the movie.\n";
    getline(cin, x1.title);
    cout << "Enter the director of the movie.\n";
    getline(cin, x1.director);
    cout << "Enter the movie's release year.\n";
    cin >> x1.yRel;
    cout << "Enter the movie's runtime(in minutes).\n";
    cin >> x1.runTime;
    cout << "Enter the movie's production costs.\n";
    cin >> x1.pCost;
    cout << "Enter the movie's first-year revenue.\n";
    cin >> x1.rev;
    
    cout << "The first movie's information.\n";
    cout << "Title: " << x0.title << endl;
    cout << "Director: " << x0.director << endl;
    cout << "Year of Release: " << x0.yRel << endl;
    cout << "Run Time: " << x0.runTime << endl;
    cout << "First Year's Profit/Loss: " << x0.pCost - x0.rev << endl;
    cout << "The second movie's information.\n" << endl;
    cout << "Title: " << x1.title << endl;
    cout << "Director: " << x1.director << endl;
    cout << "Year of Release: " << x1.yRel << endl;
    cout << "Runtime: " << x1.runTime << endl;
    cout << "First Year's Profit/Loss: " << x1.pCost - x1.rev << endl;
    
    


    return 0;
}

