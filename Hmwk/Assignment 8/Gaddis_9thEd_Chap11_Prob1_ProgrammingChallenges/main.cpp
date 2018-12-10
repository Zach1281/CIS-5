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
    cout << "Enter the movie's run time.\n";
    cin >> x0.runTime;
    
    cout << "Person 2, enter the following data.\n";
    cout << "Enter the title of the movie.\n";
    getline(cin, x1.title);
    cout << "Enter the director of the movie.\n";
    getline(cin, x1.director);
    cout << "Enter the movie's release year.\n";
    cin >> x1.yRel;
    cout << "Enter the movie's run time.\n";
    cin >> x1.runTime;
    
    cout << "The first movie's information.\n";
    cout << "Title: " << x0.title << endl;
    cout << "Director: " << x0.director << endl;
    cout << "Year of Release: " << x0.yRel << endl;
    cout << "Run Time: " << x0.runTime << endl;
    cout << "The second movie's information.\n" << endl;
    cout << "Title: " << x1.title << endl;
    cout << "Director: " << x1.director << endl;
    cout << "Year of Release: " << x1.yRel << endl;
    cout << "Run Time: " << x1.runTime << endl;
    
    


    return 0;
}

