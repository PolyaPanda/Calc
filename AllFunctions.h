#include <iostream>
enum operation{
    myAdd=1,
    mySub=2,
    myMul=3,
    myDiv=4,
    myNegate=5,
    myAbs=6,
    myPow=7,
    myExp=8,
    myLn=9,
    myLog10=10,
    myLog=11,
    mySqrt=12,
    myFac=13,
    myCeil=14,
    myFloor=15,
    myInv=16,
    mySin=17,
    myCos=18,
    myTg=19,
    myCtg=20
};
enum mode{
    Simple=1,
    Eng=2,
    Trig=3,
    Conv=4
};
mode AskForMode();
operation askForNumberOfOperation();
bool UnaryOrBinary(operation Op);
double TypeNumber();
double Addition(double a, double b);
double Subtraction(double a, double b);
double Multiplication(double a, double b);
double Division(double a, double b);
double Negative(double a);
double Abs(double a);
double Pow(double a, double b);
double Exponent(double a);
double Ln(double a);
double Log10(double a);
double Log(double a, double b);
double Sqrt(double a);
double Factorial(double a);
double Ceil (double a);
double Floor(double a);
double Inverse(double a);
double Sinus(double a);
double Cosine(double a);
double Tangent(double a);
double Cotangent(double a);
void GetAndPrintResults(operation Op, double a, double b);
void GetAndPrintResults(operation Op, double a);
