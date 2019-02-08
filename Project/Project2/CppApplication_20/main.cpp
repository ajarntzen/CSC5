/* 
 * File:   main.cpp
 * Author: Alyssa Arntzen
 * Created on February 5, 2019 12:40 PM
 * Purpose:  Drop Loop
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Set function for Random Number Generator
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char ComMv;                        //Column The Computer Places Tile. 
    unsigned int nDrop;                //Number of "drops"
    unsigned int f1,f2,f3,f4,f5,f6,f7; //Frequency
    
    //Initialize or input i.e. set variable values
    nDrop=700000000;
    f1=f2=f3=f4=f5=f6=f7=0;
    
    //Drop Tile
    for(int drop=1;drop<=nDrop;drop++){
        ComMv=rand()%7+1; //[Drop from column 1-7]
        switch(ComMv){
            case  1:f1++;break;
            case  2:f2++;break;
            case  3:f3++;break;
            case  4:f4++;break;
            case  5:f5++;break;
            case  6:f6++;break;
            case  7:f7++;break;
            default: cout<<"Out of Range"<<endl;
        }
    }
    
    //Display the outputs
    cout<<"Number of throws of the dice              = "<<nDrop<<endl;
    cout<<"Number of times dropped at first column   = "<<f1<<endl;
    cout<<"Number of times dropped at second column  = "<<f2<<endl;
    cout<<"Number of times dropped at third column   = "<<f3<<endl;
    cout<<"Number of times dropped at fourth column  = "<<f4<<endl;
    cout<<"Number of times dropped at fifth column   = "<<f5<<endl;
    cout<<"Number of times dropped at sixth column   = "<<f6<<endl;
    cout<<"Number of times dropped at seventh column = "<<f7<<endl;
 
    cout<<"Number of drops                           = "<<
            f1+f2+f3+f4+f5+f6+f7<<endl;
    
    //Exit stage right or left!
    return 0;
}
