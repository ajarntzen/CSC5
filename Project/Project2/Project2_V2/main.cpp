/* 
 * File:   main.cpp
 * Author: Alyssa Arntzen
 * Created on February 6, 2019, 12:58 PM
 * Purpose: Display Board Function
 */

#include <cstdlib>
#include <iostream>
#include<string>
using namespace std;


const int COLS=7;

//Function Prototypes
void display(char [][COLS],int,int); //Function to display board

int main(int argc, char** argv) {
    const int ROW=6;
    const int COLS=7;
    char board[ROW][COLS];
    
    display(board,ROW,COLS);
    
    
    return 0;
}

//Displays board and sets array to blank spaces.
void display(char a[][COLS],int rows,int col){ 
 for(int j=1;j<=rows;j++){
     cout<<"|";
	for(int i=1; i<=col;i++){ 
                a[rows][col]=' ';
                cout<<"| ";
                cout<<a[rows][col];
                cout<<" |";
	}cout<<"|"<<endl;
        cout<<"-------------------------------------"<<endl;
        }
        cout<<"   1    2    3    4    5    6    7"<<endl;
        cout<<endl;
}

