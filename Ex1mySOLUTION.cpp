/*
programmer: Nenfort Golit
date: 10/25/2017
purpose: The common field cricket chirps in direct proportion to the 
current temperature. Adding 40 to the number of time a cricket chirps 
in a minute, then dividing that value by 4 gives us the temperature.
Write a program that takes as input the number of chirps in a minute 
and prints the current temperature.

*/

#include <iostream>
#include <iomanip>
using namespace std;



//constant used throughout the program
#define Kadd40 40 // number added to time a criket chirps
#define Kdivideby4 4 // use to divide the sum of chip and 40

int main() {

// varialbes
int NumChirps; //number of chirps
double solution; // solution for the program

//get user input

cout << "Enter number of cricket chirps: " ;
if(!(cin >> NumChirps)){
 cout << "Invalid!! not a whole number for cricket chrips.";
 return 0;
}

 cout << endl << endl;

//calaculations.

solution = (Kadd40 + NumChirps ) / Kdivideby4;

//display output
cout << "Number of Chrips: " << NumChirps << "\n";
cout << "The temperature is: " << solution << " degrees." << endl;
cout << endl << endl;

return 0;
}

