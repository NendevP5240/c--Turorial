/* 
Programmer: Nenfort Golit
Date: 10/25/17
purpose: Write a program that will compute your final 
       grade for a programming course you are taking
Decription: Your program should ask the user for the four assignment 
            scores, the midterm, final and section grades. Then, the 
            final score is calculated and printed. To do the calculations, 
            you average the four assignment scores together and then multiply 
            it by 0.4 (40%). You then multiply the midterm score by 0.15, 
            the final by 0.35 and the participation grade by 0.1. Then you 
            add all the results of these multiplications together.
             Use functions wherever you can in this program. You can create
            a function to get the input by passing in as a parameter the 
            string to be displayed in an explanatory cout. 


*/

#include <iostream>
#include <iomanip>
using namespace std;

//constants used through out the program
#define Kassignment 0.4 //assignment percentage
#define Kmidterm 0.15 // midterm percentage
#define Kfinal 0.35 // final percentage
#define Kparticipation 0.1 // participation percentage

//A function to get the four assignment grades
double GetAssGrades() {
//variables
 int as1, as2,as3, as4;
 double Aaverage;
//get user input
//grade 1
cout << "Enter the scrore for the first assignment: " ;
cin >> as1;
//grade 2
cout << "Enter the scrore for the second assignment: " ;
cin >> as2;
//grade 3
cout << "Enter the scrore for the third assignment: " ;
cin >> as3;
//grade4
cout << "Enter the scrore for the fourth assignment: " ;
cin >> as4;
//calaculations
Aaverage = (as1 + as2 + as3 + as4) / 4;
Aaverage = Aaverage * Kassignment; 
return Aaverage;
}

// function to get midterm
double GetMidterm() {
//variables
int mg;
double mtg;
//get user input
cout << "Enter the score for the midterm: ";
cin >> mg;
//calculations
mtg = mg * Kmidterm;
return mtg;
}

// function to get final
double GetFinal() {
//variables
int fg;
double fcg;
//get user input
cout << "Enter the score for the final: ";
cin >> fg;
//calculations
fcg = fg * Kfinal;

return fcg;
}


// function for section grade
double GetSection(){
//variables 
int sg;
double particpation;
cout << "Enter the score for the section grade : " ;
cin >> sg;
particpation = sg *Kparticipation;
return particpation;
}

// function to calculate result
double GetResult(){
double results;
//calculations
results = GetAssGrades() + GetMidterm() + GetFinal() + GetSection(); 
return results;
}

main(){
//display input 
cout << "The final grade is: " << GetResult();

}