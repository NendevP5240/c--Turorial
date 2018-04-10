
#include <iostream>

using namespace std;
//function prototypes
int GetInput(), returnFirstNum(int), returnSecondNum(int), returnThirdNum(int), 
GetABC(int, int, int), GetBCA(int, int, int), GetCAB(int, int, int), GModABC(int),
GModBCA(int), GModCAB(int), Gaddxy(int, int), Gaddyz(int, int), Gaddzx(int, int);
//function to get input
int GetInput() {
int n; //input variable 
cout << "Enter a three-digit number: ";
if (!(cin >> n)){
    cout <<"Error! You can only enter 3 digit integer value!";
    return 0;
}
else {return n;} }
//function to get the firstInput
int returnFirstNum(int input){
int a; //variable for firts value
a = input / 100; //getting the first digit
    return a; }
//function to get the second value
int returnSecondNum(int input){
    int b; //variable for second value
    b = (input  % 100) / 10;   //geting the second digit
    return b; }
//function to get the third value
int returnThirdNum(int input){
    int c; //variable for third value
    c = (input % 100) % 10; 
    return c;
}
//function to mulitply and add firstValue, secondValue, and thirdValue in abc form(eg: 123)
int GetABC(int A, int B, int C){
    int ABC;//varaible for the turn the three digit in the order of abc (eg: 123)
    ABC = ((A * 100) + (B * 10) + C);
    return ABC; }

//function to mulitply and add  secondValue, thirdValue, and firstValue in bca form(eg: 231)
int GetBCA(int B, int C, int A){
    int BCA;//varaible for the turn the three digit in the order of bca (eg: 231)
    BCA = ((B * 100) + (C * 10) + A);
    return BCA; }

//function to mulitply and add   thirdValue, firstValue, and secondValue in cab form(eg: 312)
int GetCAB(int C, int A, int B){
    int CAB;//varaible for the turn the three digit in the order of cab (eg: 312)
    CAB = ((C * 100) + (A * 10) + B);
    return CAB; }
//function to find remainder of abc form
int GModABC (int input){
    int X;
    X = input % 11;// getting the remainder after being divided by 11
    return X; }
//function to find remainder of bca form
int GModBCA (int input){
    int Y;
    Y = input % 11;// getting the remainder after being divided by 11
    return Y; }
//function to find remainder of cab form
int GModCAB (int input){
    int Z;
    Z = input % 11;// getting the remainder after being divided by 11
    return Z; }
//function to add remainder of abc + bca
int Gaddxy(int X, int Y){
    int XY, M, I;
    XY = X + Y;
if (XY % 2 == 1){
    I = (XY + 11);
    M = I / 2;
    return M;
    if (I == 9) {return I ;}
}
else {
    M = XY / 2;
    return M; } }
//function to add remainder of bca + cab
int Gaddyz(int Y, int Z){
    int YZ, J, N;
    YZ = Y + Z;
if (YZ % 2 == 1){
    J = (YZ + 11);
    N = J / 2;
    return N;
    if (J == 9) {return J;}
}
else {
    N = YZ / 2;
    return N; } }
//function to add remainder of bca + cab
int Gaddzx(int Z, int X){
    int ZX, K, O;
    ZX = Z + X;
if (ZX % 2 == 1){
    K = (ZX + 11);
    O = K / 2;
    return O;
    if (K == 9) {return K;}
}
else {
    O = ZX / 2;
    return O; } }
//main function
int main()
{
   int inputValue, firstValue, secondValue, thirdValue, abcForm, bcaForm, cabForm, modABC, modBCA, modCAB, addMABC, addMBCA, addMCAB;
    inputValue = GetInput();
    firstValue = returnFirstNum(inputValue);
    secondValue = returnSecondNum(inputValue);
    thirdValue = returnThirdNum(inputValue);
    abcForm = GetABC(firstValue, secondValue, thirdValue);
    bcaForm = GetBCA(secondValue, thirdValue, firstValue);
    cabForm = GetCAB(thirdValue, firstValue, secondValue);
    modABC = GModABC(abcForm);
    modBCA = GModBCA(bcaForm);
    modCAB = GModCAB(cabForm);
    addMABC = Gaddxy(modABC, modBCA);
    addMBCA = Gaddyz(modBCA, modCAB);
    addMCAB = Gaddzx(modCAB, modABC);
    //display result
    cout << "*******************************" << endl;
    cout <<"First number: " << firstValue << endl;
    cout <<"Second number: " << secondValue << endl;
    cout <<"Third number: " << thirdValue << endl;
    cout << "*******************************" << endl;
    cout << "abc Form: " << abcForm << endl;
    cout << "bca Form: " << bcaForm << endl;
    cout << "cab Form: " << cabForm << endl;
    cout << "*******************************" << endl;
    cout << "abc mod 11: " << modABC << endl;
    cout << "bca mod 11: " << modBCA << endl;
    cout << "cab mod 11: " << modCAB << endl;
    cout << "*******************************" << endl;
    cout << "abc mod 11 + bca mod 11: " << addMABC << endl;
    cout << "bca mod 11 + cab mod 11: " << addMBCA<< endl;
    cout << "cab mod 11 + abc mod 11: " << addMCAB<<endl;
    
    return 0;
}
