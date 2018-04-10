/*
Programmer: Nenfort Golit
Date: 1/27/2017
description: Ask a user to enter a three-digit number whose first digit 
             is greater than its last. Your program will reverse the number,
             and subtract the reversal from the original number. Finally, 
             reverse the resulting number, and add it to its unreversed form.
             Output the final result. The original number that the user 
             enters must be of integer type (not three chars).*/ 

#include <iostream>
using namespace std;

//function to get input 
int GetInput() {
//input variable 
int n;

cout << "Enter a three-digit number: ";
if (!(cin >> n)){
    cout <<"Error! You can only enter 3 digit integer value!";
    return 0;
}
else {return n;}
}

//function to Reverse Input 
void ReverseInput(int InputDigit) {
//variables for reversing input
int a, b, c, i, j, k, ReverseI, SubtractI, SubReverse, AddSR;
//calculation to reverse the input
a = InputDigit / 100;  //geting the first digit
b =(InputDigit  % 100) / 10;   //geting the second digit
c =(InputDigit % 100) % 10;   //geting the third digit
ReverseI = (c * 100) + (b * 10) + a; // reversing the input 
SubtractI = InputDigit - ReverseI; //subtracting the values from input and reverse

//calculation to reverse the subtracted input
i =  SubtractI / 100;  //geting the first digit
j =( SubtractI % 100) / 10;   //geting the second digit
k =(SubtractI % 100) % 10;   //geting the third digit
SubReverse = (k * 100) + (j * 10) + i; // reversing the input 
AddSR = SubtractI + SubReverse;

//Display inputDigit, reverse, subtract(inputDigit - reverse),
//reverse( subtract(inputDigit - reverse)), and 
//add (subtract(inputDigit - reverse)    + reverse( subtract(inputDigit - reverse)))

cout <<"input number: " << InputDigit << "\n";
cout <<"reverse it: " << ReverseI << "\n";
cout <<"subtract: "<< InputDigit  << " - " << ReverseI << " = " << SubtractI << "\n";
cout <<"reverse it: " << SubReverse<< "\n";
cout <<"add: " <<  SubReverse << " + " << SubtractI << " = "  << AddSR << "\n";

    
//condition statement ReverseInput must nut be greater than input 
if (ReverseI > InputDigit){
    cout << "Sorry!!! the reverse values is greater \n";
    cout << "than the input, please enter a number value \n";
    cout << "that its reverse value will be less than the input.\n  ";
    cout << "For Example : 901 will reverse to 109. " << endl; 
}
}

main(){
//input variable
int Value;
Value = GetInput();
ReverseInput(Value); // display all values 
}