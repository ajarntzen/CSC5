/* 
 * File:   main.cpp
 * Author: Alyssa Arntzen
 * Created on February 6, 2019, 12:58 PM
 * Purpose: Connect 4 Game
 */

//System Libraries
#include <cstdlib> 
#include <iostream>
#include <string.h>
#include <fstream>
#include <cmath>

using namespace std;

//User Libraries
//Holds player name and the tile 'X' or 'O'
struct player
{
    string pName;
    char pTile;
};

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLS=7;

//Function Protoypes
int pDrop(char [][COLS], player);    //Player drops tiles
void chck(char [][COLS], player,int);//Check to see if column is full
void display(char [][COLS],int,int); //display board
int chckwin( char [][COLS],player);  //check to see if connect four
int cfull(char [][COLS]);            //check if entire board is full
void winner(player);                 //display winner
int replay(char [][COLS]);

//Program Execution
int main(int argc, char** argv) {
    
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    player pOne,pTwo;    
    int drop, win, full,again;
    const int ROW=6;
    char board[ROW][COLS];
    
    //Initialize Variables
    full=0;
    win=0;
    again=0;
    
    //Intro and Name Input
    cout<<"Welcome to Connect Four!" <<endl;
    cout<<"Player 1, please enter your name."<<endl;
    cin>>pOne.pName;
    pOne.pTile='X';
    cout<<"Player 2, please enter your name: ";
    cin >>pTwo.pName;
    pTwo.pTile='O';

    display(board,ROW,COLS);
    do
    {
        drop=pDrop(board,pOne);
        chck(board,pOne,drop);
        display(board,ROW,COLS);
        win=chckwin(board,pOne);
        if (win==1){
            winner(pOne);
            again=replay(board);
            
        }
        
        drop=pDrop(board,pTwo);
        chck(board,pTwo,drop);
        display(board,ROW,COLS);
        win=chckwin(board,pTwo);
        if (win==1){
                winner(pTwo);
                again=replay(board);
        }
        
        full=cfull(board);
        if (full==7){
            cout<<"No more moves. It's a draw!"<<endl;
        }
    }while(again!=2);

return 0;
}

int pDrop(char a[][COLS], player active){
    int drop;
    do{
        cout<<active.pName <<", where would you like to drop a tile?";
        cin>> drop;
        while (a[1][drop]=='X' || a[1][drop]=='O'){
            cout<<"Please pick another column."<<endl;
            cin>>drop;
        }
    }while (drop<1 || drop>7);
return drop;
}

void chck (char a[][COLS],player active, int drop){
    int row;
    int turn=0;
    do{
        if (a[row][drop]!='X' && a[6][drop]!='O'){
            a[6][drop]=active.pTile;
            turn=1;
        }
        else
        --row;
	}while(turn != 1);
}

void display(char a[][COLS],int rows, int col){
    for(int i=1;i<=rows;i++){
        cout<<"|";
        for(int j=1;j<=col;j++){
            if(a[rows][col] != 'X' && a[rows][col] != 'O')
                    a[i][j] = ' ';
                    cout<<"| ";
                    cout<<a[rows][col];
                    cout<<" |";
        }cout<<"|"<<endl;
        cout<<"-------------------------------------"<<endl;
        }
        cout<<"   1    2    3    4    5    6    7"<<endl;
        cout<<endl;
    }


int chckwin(char a[][COLS],player active){
    char XO;
    int win;
    XO=active.pTile;
    win=0;

    for(int i=8;i>=1;--i){
        for(int j=9;j<=1;--j){
            if((a[i][j]==XO)     &&
               (a[i-1][j-1]==XO) &&
               (a[i-2][j-2]==XO) &&
               (a[i-3][j-3]==XO))
                    {
                        win=1;
                    }
                    if((a[i][j]==XO)   &&
                       (a[i][j-1]==XO) &&
                       (a[i][j-2]==XO) &&
                       (a[i][j-3]==XO))
                    {
                        win=1;
                    }

                    if((a[i][j]==XO)   &&
                       (a[i-1][j]==XO) &&
                       (a[i-2][j]==XO) &&
                       (a[i-3][j]==XO))
                    {	
                        win=1;
                    }

                    if((a[i][j]==XO)     &&
                       (a[i-1][j+1]==XO) &&
                       (a[i-2][j+2]==XO) &&
                       (a[i-3][j+3]==XO))
                    {
                        win=1;
                    }

                    if ((a[i][j]==XO)   &&
                        (a[i][j+1]==XO) &&
                        (a[i][j+2]==XO)  &&
                        (a[i][j+3]==XO))
                    {
                        win=1;
                    }
        }
    }
    return win;
}

int cfull(char a[][COLS]){
    int full;
    full=0;
    for(int i=1;i<=7;i++)
    {
     if (a[1][i] != ' ')
        ++full;
    }
return full;
}

void winner(player active){
    cout<<endl;
    cout<<"Congrats, "<<active.pName<<"!! You win!"<<endl;
}

int replay(char a[][COLS] ){
    int restart;
    cout<<"Thank you for playing!"<<endl;
    cout<<"Would you like to play again?"<<endl;
    cout<<"Press '1' to play again and '2' to quit."<<endl;
    cin>>restart;
    if(restart==1){
      for(int i=1;i<=6;i++){
        for(int j=1;j<=7;j++){
                a[i][j] = ' ';
        }
       }
    }
    else
    cout << "Goodbye!" << endl;
return restart;
}