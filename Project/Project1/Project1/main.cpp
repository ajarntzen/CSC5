/* 
 * File: main.cpp
 * Author: Alyssa Arntzen
 * Created on January 31, 2019
 *Purpose: Connect 4. Display Board and Player One Starts
 */

#include <iostream> //Input/output Library
#include <fstream>  //File stream library
#include <string.h> //String Library
#include <cstdlib>  //Random/Srand
#include <ctime>    //Random Number seed
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    int rows=6,
        col=7,
        choice;
    string Name1, Name2;
    ifstream inName;    //Input file
    ofstream outName;   //Output file
   
    //Intro and name input
    cout<<"Welcome to Connect Four!"<<endl;
    cout<<"Player One, Enter Your Name: ";
    cin>>Name1;
    cout<<"Player Two, Enter Your Name: ";
    cin>>Name2;
    cout<<endl;
 
    //Display the Board
    for(int j=1;j<=rows;j++){
        cout<<"|";
	for(int i=1; i<=col;i++){       
            cout << "|   |";
	}cout<<"|"<<endl;
        cout<<"-------------------------------------"<<endl;
    }
        cout<<"   1    2    3    4    5    6    7"<<endl;
        cout<<endl;
        
    //Game Begins
        cout<<Name1<<", Enter which column (1-7) you would like to drop an 'X': ";
        cin>>choice;

    //First Player's First Move, if choice is equal to '1', first column is filled,
    //if choice is equal to '2', second column is filled, and so on.
    //Start with validating user input. 
    while (choice<1 || choice>7){
        cout<<"Please Enter a Value from 1 to 7: ";
        cin>>choice;
    }
    if (choice>=1 && choice<=7){
        if(choice==1){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"|| X |";
            for(int k=2;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==2){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   || X |";
            for(int k=3;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==3){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   || X |";
            for(int k=4;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==4){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   ||   || X |";
            for(int k=5;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==5){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   ||   ||   || X |";
            for(int k=6;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==6){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   ||   ||   ||   || X |";
            for(int k=7;k<=col;k++){
                cout<<"|   |";
            }
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
        if(choice==7){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   ||   ||   ||   ||   || X |";
            cout<<"|"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
        }
     }
    
return 0;
}

