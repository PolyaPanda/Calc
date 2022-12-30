#include <iostream>
#include <cmath>
#include "AllFunctions.h"
mode AskForMode(){
    int NumberOfMode;
    std::cout<<"Choose the number of mode:\n"
               "1 - Simple\n"
               "2 - Engineering\n"
               "3 - Trigonometry\n"
               "4 - Converter\n";
    std::cin>>NumberOfMode;
    return static_cast<mode>(NumberOfMode);
};

operation askForNumberOfOperation(){
    int NumberOfOperation;
    mode ChosenMode = AskForMode();
    if(ChosenMode==Simple){
        std::cout<<"Choose the number of operation:\n"
                   "1 - Addition\n"
                   "2 - Subtraction\n"
                   "3 - Multiplication\n"
                   "4 - Division\n"
                   "5 - Negate\n"
                   "6 - Abs\n";
        std::cin>>NumberOfOperation;
        return static_cast<operation>(NumberOfOperation);
    }
    else if(ChosenMode==Eng){
        std::cout<<"Choose the number of operation:\n"
                   "1 - Pow\n"
                   "2 - Exp\n"
                   "3 - Ln\n"
                   "4 - Log10\n"
                   "5 - Log\n"
                   "6 - Sqrt\n"
                   "7 - Factorial\n"
                   "8 - Round up\n"
                   "9 - Round down/n"
                   "10 - Inverse";
        std::cin>>NumberOfOperation;
        return static_cast<operation>(NumberOfOperation+6);
    }
    else if(ChosenMode==Trig){
        std::cout<<"Choose the number of operation:\n"
                   "1 - Sinus\n"
                   "2 - Cosine\n"
                   "3 - Tangent\n"
                   "4 - Cotangent\n";
        std::cin>>NumberOfOperation;
        return static_cast<operation>(NumberOfOperation+16);
    }
}

bool UnaryOrBinary(operation Op){
    switch(Op){
        case myAdd:
            return false;
            break;
        case mySub:
            return false;
            break;
        case myMul:
            return false;
            break;
        case myDiv:
            return false;
            break;
        case myNegate:
            return true;
            break;
        case myAbs:
            return true;
            break;
        case myPow:
            return false;
            break;
        case myExp:
            return true;
            break;
        case myLn:
            return true;
            break;
        case myLog10:
            return true;
            break;
        case myLog:
            return false;
            break;
        case mySqrt:
            return true;
            break;
        case myFac:
            return true;
            break;
        case myCeil:
            return true;
            break;
        case myFloor:
            return true;
            break;
        case myInv:
            return true;
            break;
        case mySin:
            return true;
            break;
        case myCos:
            return true;
            break;
        case myTg:
            return true;
            break;
        case myCtg:
            return true;
            break;
        default:
            std::cout << "Error! Try again!\n\n";
            operation NewTry = askForNumberOfOperation();
            UnaryOrBinary(NewTry);
            break;
    }
}

double TypeNumber(){
    double Number;
    std::cin >> Number;
    return Number;
}

double Addition(double a, double b) {
    return a + b;
}

double Subtraction(double a, double b) {
    return a - b;
}

double Multiplication(double a, double b) {
    return a * b;
}

double Division(double a, double b) {
    return a / b;
}

double Negative(double a) {
    return -a;
}

double Abs(double a) {
    if (a >= 0) {
        return a;
    }
    else return -a;
}

double Pow(double a, double b) {
    if (b != 0) {
        return pow(a, b);
    }
    else return 1;
}

double Exponent(double a) {
    return Pow(2.718, a);
}

double Ln(double a) {
    return log(a);
}

double Log10(double a) {
    return log10(a);
}

double Log(double a, double b) {
    return log(b) / log(a);
}

double Sqrt(double a) {
    return Pow(a, 0.5);
}

double Factorial(double a) {
    while (a > 1) {
        return a * Factorial(a - 1);
    }
    if (a == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

double Ceil (double a) {
    if ((a - a / 10) != 0 ) {
        return a + 1;
    }
    else {
        return a;
    }
}

double Floor(double a) {
    if ((a - a / 10) != 0) {
        return a;
    }
    else {
        return a;
    }
}

double Inverse(double a) {
    return 1 / a;
}

double Sinus(double a) {
    while (a > 6.283185307) {
        a -= 6.283185307;
    }
    double temp = 0;
    int n = 1;
    double b = a;
    while (Abs(a) > 0.000001) {
        temp += a;
        a = a * (-1) * b * b / (2 * n + 1) / 2 / n;
        n++;
    }
    return temp;
}

double Cosine(double a) {
    return 1 - Pow(Sinus(a), 2);
}

double Tangent(double a) {
    return Sinus(a) / Cosine(a);
}

double Cotangent(double a) {
    return Cosine(a) / Sinus(a);
}

void GetAndPrintResults(operation Op, double a, double b){
    switch(Op){
        case myAdd:
            std::cout<<a<<"+"<<b<<"="<<Addition(a,b);
            break;
        case mySub:
            std::cout<<a<<"-"<<b<<"="<<Subtraction(a,b);
            break;
        case myMul:
            std::cout<<a<<"*"<<b<<"="<<Multiplication(a,b);
            break;
        case myDiv:
            std::cout<<a<<"/"<<b<<"="<<Division(a,b);
            break;
        case myPow:
            std::cout<<a<<"^"<<b<<"="<<Pow(a,b);
            break;
        case myLog:
            std::cout<<"log_"<<a<<"("<<b<<")="<<Log(a,b);
            break;
    }
}

void GetAndPrintResults(operation Op, double a){
    switch(Op){
        case myNegate:
            std::cout<<"-"<<a<<"="<<Negative(a);
            break;
        case myExp:
            std::cout<<"exp^"<<a<<"="<<Exponent(a);
            break;
        case myLn:
            std::cout<<"ln("<<a<<")="<<Ln(a);
            break;
        case myLog10:
            std::cout<<"log_10("<<a<<")="<<Log10(a);
            break;
        case mySqrt:
            std::cout<<"√"<<a<<"="<<Sqrt(a);
            break;
        case myAbs:
            std::cout<<"|"<<a<<"|="<<Abs(a);
            break;
        case myFac:
            std::cout<<a<<"!="<<Factorial(a);
            break;
        case myCeil:
            std::cout<<"Round up "<<a<<"="<<Ceil(a);
            break;
        case myFloor:
            std::cout<<"Round down "<<a<<"="<<Floor(a);
            break;
        case myInv:
            std::cout<<"Inverse "<<a<<"="<<Inverse(a);
            break;
        case mySin:
            std::cout<<"sin("<<a<<")="<<Sinus(a);
            break;
        case myCos:
            std::cout<<"cos("<<a<<")="<<Cosine(a);
            break;
        case myTg:
            std::cout<<"tg("<<a<<")="<<Tangent(a);
            break;
        case myCtg:
            std::cout<<"ctg("<<a<<")="<<Cotangent(a);
            break;
    }
}
