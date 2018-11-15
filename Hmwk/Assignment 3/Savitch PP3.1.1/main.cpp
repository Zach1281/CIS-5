/* 
 * File:   PP1.cpp
 * Author: Zachary Romero
 * Created on September 28, 2018, 5:54 PM
 * Purpose: HW 3
 */

#include <iostream>
using namespace std;

int main() 
{
    char player1, player2, choice;
    cout << "Player 1:\n";
    cout << "Enter R for rock, P for paper, or S for scissors.\n";
    cin >> player1;
    cout << "Player 2:\n";
    cout << "Enter R for rock, P for paper, or S for scissors.\n";
    cin >> player2;
    switch (player1)
    {
        case 'r':
        case 'R':
            switch (player2)
            { 
                case 'r':
                case 'R':
                    cout << "Tie Game!" << endl;
                    break; 
                case 's':
                case 'S':
                    cout << "Player 1 Wins!" << endl;
                    break;
                case 'p':
                case 'P':
                    cout << "Player 2 Wins!" << endl;
                    break;
                default:
                    cout << "Invalid character, reenter selections." << endl;
            }
        case 's':
        case 'S':
            switch (player2)
            {
                case 'r':
                case 'R':
                    cout << "Player 2 Wins!" << endl;
                    break;
                case 's':
                case 'S':
                    cout << "Tie Game!" << endl;
                    break;
                case 'p':
                case 'P':
                    cout << "Player 1 Wins!" << endl;
                    break;
                default:
                    cout << "Invalid character, reenter selections." << endl;
            }
        case 'p':
        case 'P':
            switch (player2)
            {
                case 'r': 
                case 'R':
                    cout << "Player 1 Wins!" << endl;
                    break;
                case 's':
                case 'S':
                    cout << "Player 2 Wins!" << endl;
                    break;
                case 'p':
                case 'P':
                    cout << "Tie Game!" << endl;
                    break;
                default:
                    cout << "Invalid character, reenter selections." << endl;                       
            }
        default:
            cout << "Invalid character, reenter selections." << endl;
    }
    

    


   return 0;
}

