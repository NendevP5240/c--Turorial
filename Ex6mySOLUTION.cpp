/* 
Programmer: Nenfort Golit
Date: 11/13/2017
purpose: https://developers.google.com/edu/c++/getting-started exercise 6
Description:  

The law requires that food product manufacturers place expiration dates on their products, 
but there is a loophole in the law: it does not require the expiration date to be in any particular form. 
So, it can be written in Swahili and still be legal. Ralph Nader's third cousin, Nadine is a self-appointed 
Food Quality Spy. She has learned that many food product manufacturers have started encoding the product 
expiration dates to keep customers from knowing how old the stuff is. But the encoding does allow grocers to
figure out the expiration dates if for some reason, they want to.

One popular encoding method:
encode the months from Jan to Dec as 'A' through 'L'
encode each digit of the date as 'Q' through 'Z'
encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.
Nadine found a particularly questionable loaf of bread with this date: ARZM. 
Write a program to determine the date.
*/

#include <iostream>
#include <string>

using namespace std;

string getInput(){
string str; //the input variable

cout << "Enter the four character code: ";
if (!(cin>>str)){
  cout <<"Error! Please start program again and enter a string value in Caps!" << endl;}
else{ return str;}

}
//getting the firts charcter of the string
void displayCode1(string code){
if (code[0] == 'A'){cout <<"January ";}
else if (code[0] == 'B'){cout <<"Febuary ";}
else if (code[0] == 'C'){cout <<"March ";}
else if (code[0] == 'D'){cout <<"April ";}
else if (code[0] == 'E'){cout <<"May ";}
else if (code[0] == 'F'){cout <<"June ";}
else if (code[0] == 'G'){cout <<"July ";}
else if (code[0] == 'H'){cout <<"August ";}
else if (code[0] == 'I'){cout <<"Septermber ";}
else if (code[0] == 'J'){cout <<"October ";}
else if (code[0] == 'K'){cout <<"November ";}
else if (code[0] == 'L'){cout <<"December";}
else {cout <<"Error ";}
}

//getting the second character of the string
void displayCode2(string code){
if (code[1] =='Q') {cout << "0";}
else if (code[1] =='R') {cout << "1";}
else if (code[1] =='S') {cout << "2";}
else if (code[1] =='T') {cout << "3";}
else if (code[1] =='U') {cout << "4";}
else if (code[1] =='V') {cout << "5";}
else if (code[1] =='W') {cout << "6";}
else if (code[1] =='X') {cout << "7";}
else if (code[1] =='Y') {cout << "8";}
else if (code[1] =='Z') {cout << "9";}
else {cout <<"Error ";}
}

//getting the third charcter of the string
void displayCode3(string code){
if (code[2] =='Q') {cout << "0";}
else if (code[2] =='R') {cout << "1 ";}
else if (code[2] =='S') {cout << "2 ";}
else if (code[2] =='T') {cout << "3 ";}
else if (code[2] =='U') {cout << "4 ";}
else if (code[2] =='V') {cout << "5 ";}
else if (code[2] =='W') {cout << "6 ";}
else if (code[2] =='X') {cout << "7 ";}
else if (code[2] =='Y') {cout << "8 ";}
else if (code[2] =='Z') {cout << "9 ";}
else {cout <<"Error ";}
}

//getting the fourth character from the string

void displayCode4(string code){
if (code[3] == 'A'){cout << "1996" << endl;}
else if (code[3] == 'B') {cout << "1997" << endl;}
else if (code[3] == 'C') {cout << "1998" << endl;}
else if (code[3] == 'D') {cout << "1990" << endl;}
else if (code[3] == 'E') {cout << "2000" << endl;}
else if (code[3] == 'F') {cout << "2001" << endl;}
else if (code[3] == 'G') {cout << "2002" << endl;}
else if (code[3] == 'H') {cout << "2003" << endl;}
else if (code[3] == 'I') {cout << "2004" << endl;}
else if (code[3] == 'J') {cout << "2005" << endl;}
else if (code[3] == 'K') {cout << "2006" << endl;}
else if (code[3] == 'L') {cout << "2007" << endl;}
else if (code[3] == 'M') {cout << "2008" << endl;}
else if (code[3] == 'N') {cout << "2009" << endl;}
else if (code[3] == 'O') {cout << "2010" << endl;}
else if (code[3] == 'P') {cout << "2011" << endl;}
else if (code[3] == 'Q') {cout << "2012" << endl;}
else if (code[3] == 'R') {cout << "2013" << endl;}
else if (code[3] == 'S') {cout << "2014" << endl;}
else if (code[3] == 'T') {cout << "2015" << endl;}
else if (code[3] == 'U') {cout << "2016" << endl;}
else if (code[3] == 'V') {cout << "2017" << endl;}
else if (code[3] == 'W') {cout << "2018" << endl;}
else if (code[3] == 'X') {cout << "2019" << endl;}
else if (code[3] == 'Y') {cout << "2020" << endl;}
else if (code[3] == 'Z') {cout << "2021" << endl;}
else{cout << "Error" << endl;}

}

main(){
string decode;
decode = getInput();
//display the code
cout <<"The decoded " << decode << " expiration date: ";
displayCode1(decode);
displayCode2(decode);
displayCode3(decode);
displayCode4(decode);
}