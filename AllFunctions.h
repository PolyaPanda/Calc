#include <iostream>
enum operation{
    myAdd=1,
    mySub=2,
    myMul=3,
    myDiv=4,
    myNegate=5,
    myAbs=6,
    myUnPl=7,
    myUnMin=8,
    myPow=9,
    myExp=10,
    myLn=11,
    myLog10=12,
    myLog=13,
    mySqrt=14,
    myFac=15,
    myCeil=16,
    myFloor=17,
    myInv=18,
    mySin=19,
    myCos=20,
    myTg=21,
    myCtg=22,
    mySh=23,
    myCh=24,
    myTh=25,
    myCth=26
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
double UnaryPlus(double a);
double UnaryMinus(double a);
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
double H_Sinus(double a);
double H_Cosine(double a);
double H_Tangent(double a);
double H_Cotangent(double a);
void GetAndPrintResults(operation Op, double a, double b);
void GetAndPrintResults(operation Op, double a);
