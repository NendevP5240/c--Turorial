/*
Programmer: Nenfort Golit
Date: 11/18/2017
Purpose: https://developers.google.com/edu/c++/getting-started exercise 7
Discription: This is a number analogy to a famous card trick. Ask the user to enter a three-digit number. 
Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the remainders of
 the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these remainders X, Y, Z. Add 
them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 (whichever operation 
results in a positive number less than 20; note if the sum is 9, just report this and stop the process). 
Finally, divide each of the sums in half. The resulting digits are A, B, C. 
Write a program that implements this algorithm. */


/* Psuedo code
ABC //Alphabeticlay form example 
123 //numerical form example
//getting them seperatly
A
B
C

1
2
3
//form the following and divide by 11
ABC / 11, BCA / 11, CAB / 11  //how it should be in theory

123 / 11, 231 / 11, 312 / 11 //how it should be practically

//find remainders and assign value to them
ABC / 11 = X
BCA / 11 = Y
CAB / 11 = Z

//Add the remainders
X + Y = XY
Y + Z = YZ
Z + X = ZX

//Validate to see if any of the values are odd
if (XY % 2 = 1) { XY + 11 = I; if (I == 9) { return I;} }
 else { XY/2 = M; Creturn M;}
if (YZ % 2 = 1) { YZ + 11 = J; if (J == 9) { return J;} }
 else {return YX;}
if (ZX % 2 = 1) { ZX + 11 = K; if (k == 9) { return k;} }
 else {return ZX;}


*/



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

void Solution(int GI){
//variables
int A,B,C, ABC, BCA, CAB, X, Y, Z, XY,YZ, ZX, I , J, K, M, N, O;
//calculation to seperate the digits
A = GI/ 100;  //geting the first digit
B = (GI  % 100) / 10;   //geting the second digit
C =(GI % 100) % 10;   //geting the third digit
//calculation to get ABC, BCA, CAB
ABC = ((A * 100) + (B * 10) + C);
BCA = ((B * 100) + (C * 10) + A);
CAB = ((C * 100) + (A * 10) + B);
//Display ABC, BCA, CAB
cout << ABC << endl;
cout << BCA << endl;
cout << CAB << endl;
//Assign the remainders for ABC, BCA, CAB
X = ABC % 11;
Y = BCA % 11;
Z = CAB % 11;
//Display X, Y, Z
cout << X << endl;
cout << Y << endl;
cout << Z << endl;

//Add the remainders

XY = X + Y;
if (XY % 2 == 1){
    I = (XY + 11);
    M = I / 2;
    cout << M << endl;
    if (I == 9)
    cout << I << endl;
}
else {
    M = XY / 2;
    cout << M << endl;
}
YZ = Y + Z;
if (YZ % 2 == 1){
    J = (YZ + 11);
    N = J / 2;
    cout << N << endl;
    if (J == 9)
    cout << J << endl;
}
else {
    N = YZ / 2;
    cout << N << endl;
}
ZX = Z + X;
if (ZX % 2 == 1){
    K = (ZX + 11);
    O = K / 2;
    cout << O << endl;
    if (K == 9)
    cout << K << endl;
}
else {
    O = ZX / 2;
    cout << O << endl;
}
}

int main(){
    int g = GetInput();
    cout << "This is the number you typed ";
    cout << g;
    cout << endl;
    Solution(g);
}
