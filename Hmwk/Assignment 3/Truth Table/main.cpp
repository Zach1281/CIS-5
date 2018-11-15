/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 8, 2018, 7:05 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Output Table Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) "<<
            "!X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Output the first row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    //Output the second row
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"  ";
    
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"  ";
    
//Exit
    return 0;
}