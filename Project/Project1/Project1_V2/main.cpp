/* 
 * File: main.cpp
 * Author: Alyssa Arntzen
 * Created on February 2, 2019
 *Purpose: Connect 4. Display Board
 *         Player one and two start
 */

#include <iostream> //Input/output Library
#include <fstream>  //File stream library
#include <string.h> //String Library
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    int      rows=6,
             col=7,
             onemv1;        //Player One Move One.
    string   Name1, Name2;
    ifstream inName;        //Input file
    ofstream outName;       //Output file
   
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
        cout<<Name1<<", Enter which column you would like to drop an 'X': ";
        cin>>onemv1;

    //First Player's First Move, if onemv1 is equal to '1', first column is filled,
    //if onemv1 is equal to '2', second column is filled, and so on.
    //Start with validating user input. 
    while (onemv1<1 || onemv1>7){
        cout<<"Please Enter a Value from 1 to 7: ";
        cin>>onemv1;
    }
    
    if (onemv1>=1 && onemv1<=7){
        if(onemv1==1){
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
            
            //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
                    }
            //Based on player one putting 'X' on first row first column,
            /*Second player will place an 'O'. If player selects the first column,
             * it will be placed in the first column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| 0 |";
                    for(int k=2;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"|| X |";
                    for(int k=2;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X || O |";
                    for(int k=3;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X ||   || O |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X ||   ||   || O |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X ||   ||   ||   || O |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X ||   ||   ||   ||   || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"|| X ||   ||   ||   ||   ||   || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        if(onemv1==2){
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
     
        //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
                    }
            /*Based on player one putting 'X' on second column,
             *second player will place an 'O'. If player selects the 2nd column,
             * it will be placed in the second column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O || X |";
                    for(int k=3;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || O |";
                    for(int k=3;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"||   || X |";
                    for(int k=3;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || X || O |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || X ||   || O |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || X ||   ||   || O |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || X ||   ||   ||   || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || X ||   ||   ||   ||   || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        
     
        if(onemv1==3){
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
            
            //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
                    }
            /*Based on player one putting 'X' on third column,
             *second player will place an 'O'. If player selects the 2nd column,
             * it will be placed in the second column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O ||   || X |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || O || X |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || O |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    
                    cout<<"||   ||   || X |";
                    for(int k=4;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || X || O |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || X ||   || O |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || X ||   ||   || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || X ||   ||   ||   || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        
        if(onemv1==4){
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
            
            //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
            }
            
            /*Based on player one putting 'X' on fourth column,
             *second player will place an 'O'. If player selects the fourth column,
             * it will be placed in the fourth column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O ||   ||   || X |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || O ||   || X |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || O || X |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || O |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                       
                    cout<<"||   ||   ||   || X |";
                    for(int k=5;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || X || O |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || X ||   || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || X ||   ||   || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        
        if(onemv1==5){
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
        
            //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
            }
            
            /*Based on player one putting 'X' on fifth column,
             *second player will place an 'O'. If player selects the fifth column,
             * it will be placed in the fifth column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O ||   ||   ||   || X |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || O ||   ||   || X |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || O ||   || X |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || O || X |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   || O |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"||   ||   ||   ||   || X |";
                    for(int k=6;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   || X || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   || X ||   || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        
        if(onemv1==6){
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
        
            //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
            }
            
            /*Based on player one putting 'X' on sixth column,
             *second player will place an 'O'. If player selects the sixth column,
             * it will be placed in the sixth column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O ||   ||   ||   ||   || X |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   || O ||   ||   ||   || X |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==3){
                  for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   || O ||   ||   || X |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if (twomv1==4){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   || O ||   || X |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==5){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   || O || X |";
                    cout<<"|   ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==6){
                    for(int j=1;j<=rows-2;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   ||   || O |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"||   ||   ||   ||   ||   || X |";
                    for(int k=7;k<=col;k++){
                        cout<<"|   |";
                    }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                if(twomv1==7){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){
                            cout<<"|   |";
                        }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                        }
                    cout<<"||   ||   ||   ||   ||   || X || O ||"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
            }
        }
        
        
        
        if(onemv1==7){
            for(int j=1;j<=rows-1;j++){
                cout<<"|";
                for(int i=1;i<=col;i++){       
                    cout <<"|   |";
                    }
                cout<<"|"<<endl;
                cout<<"-------------------------------------"<<endl;
            }
            cout<<"||   ||   ||   ||   ||   ||   || X ||"<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"   1    2    3    4    5    6    7"<<endl;
            cout<<endl;
            
        //Player Two Begins Turn
            cout<<Name2<<", Enter which column you would like to drop an 'O': ";
            int twomv1; //Player Two Move 1;
            cin>>twomv1;
            while (twomv1<1 || twomv1>7){ //Validating User Input
                cout<<"Please Enter a Value from 1 to 7: ";
                cin>>twomv1;
            }
            
            /*Based on player one putting 'X' on seventh column,
             *second player will place an 'O'. If player selects the seventh column,
             * it will be placed in the seventh column, second row. Otherwise, 
             * 'O' will be placed along first row, based on their selection of
             * column.*/
            if (twomv1>=1 && twomv1<=7){ //
                if(twomv1==1){
                    for(int j=1;j<=rows-1;j++){
                        cout<<"|";
                        for(int i=1;i<=col;i++){       
                            cout <<"|   |";
                            }
                        cout<<"|"<<endl;
                        cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"|| O ||   ||   ||   ||   ||   || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                }
                
                if (twomv1==2){
                    for(int j=1;j<=rows-1;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   || O ||   ||   ||   ||   || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                if (twomv1==3){
                    for(int j=1;j<=rows-1;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   ||   || O ||   ||   ||   || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                if (twomv1==4){
                    for(int j=1;j<=rows-1;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   ||   ||   || O ||   ||   || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                if (twomv1==5){
                    for(int j=1;j<=rows-1;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   ||   ||   ||   || O ||   || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                if (twomv1==6){
                    for(int j=1;j<=rows-1;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   ||   ||   ||   ||   || O || X ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                if (twomv1==7){
                    for(int j=1;j<=rows-2;j++){
                    cout<<"|";
                    for(int i=1;i<=col;i++){       
                        cout <<"|   |";
                        }
                    cout<<"|"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    }
                    cout<<"||   ||   ||   ||   ||   ||   || O ||";
                    cout<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"||   ||   ||   ||   ||   ||   || X ||"<<endl;
                    cout<<"   1    2    3    4    5    6    7"<<endl;
                    cout<<endl;
                    }
                
                }
            }
        }
    

return 0;
}