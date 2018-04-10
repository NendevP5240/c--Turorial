/*
Programmer: Nenfort Golit
Date: 10/25/2017
purpose: As electronic stopwatches become cheaper and more accurate,
         we will no doubt be deluged with impossibly accurate measurements of 
        time. Write a program that takes as input a time period given in seconds,
       and outputs the number of hours, minutes and seconds it represents.

Description: In the following, do decomposition prior to writing your program. 
             Use functions wherever possible to create well-structured programs.
 */
#include <iostream>
using namespace std;

//Function to get 
int GetInput(){
 //variable 
int Nseconds;
cout << "Number of seconds: " ;
if(!(cin >> Nseconds)){
cout << "Error!! Enter numbers only" << endl;
return 0;
}
else {
return Nseconds;}
}

// function to calculate hour
 void CalcHour(int inputSec){
//variables Thour;
int Thour;
//calculation to get hour
// 3600 seconds == 1 hour

 Thour = inputSec / 3600;
cout << "Hours: " << Thour << endl;

}

//function to Calculate minutes
void CalcMinutes(int inputSec){
//variable
int Tmin;
//calculations
//60 seconds = 1 minutes
Tmin = (inputSec % 3600) / 60; 
cout << "Minutes: " << Tmin << endl;
}

//function to calculate Seconds remaining
void CalcSeconds(int inputSec){
//variable 
int Tsec;
//calculations
Tsec = (inputSec % 3600) % 60; 
cout << "Seconds: " << Tsec << endl;
}

main(){
//variable
int seconds;
seconds = GetInput();
if (seconds == 0 ){return 0;}
CalcHour(seconds);
CalcMinutes(seconds);
CalcSeconds(seconds);
}