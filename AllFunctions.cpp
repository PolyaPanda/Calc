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
            "6 - Abs\n"
            "7 - Unary Plus\n"
            "8 - Unary Minus\n";
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
                   "9 - Round down\n"
                   "10 - Inverse\n";
        std::cin>>NumberOfOperation;
        return static_cast<operation>(NumberOfOperation+8);
    }
    else if(ChosenMode==Trig){
        std::cout<<"Choose the number of operation:\n"
                   "1 - Sinus\n"
                   "2 - Cosine\n"
                   "3 - Tangent\n"
                   "4 - Cotangent\n";
        std::cin>>NumberOfOperation;
        return static_cast<operation>(NumberOfOperation+18);
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
        case myUnPl:
            return true;
            break;
        case myUnMin:
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
    std::cout<<"Type number\n";
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

double UnaryPlus(double a){
    return ++a;
}

double UnaryMinus(double a){
    return --a;
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
    double result = 0;
    double temp = a;
    int count = 1;
    while (Abs(temp) > 0.000001) {
        result += temp;
        temp = (-1) * temp * a * a / (2 * count) / (2 * count + 1);;
        count++;
    }
    return result;
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

double Sh(double a){
    return (Exponent(a)- Exponent(-a))/2;
}

double Ch(double a){
    return (Exponent(a)+ Exponent(-a))/2;
}

double Th(double a){
    return Sh(a)/Ch(a);
}

double Cth(double a){
    return Ch(a)/Sh(a);
}

void GetAndPrintResults(operation Op, double a, double b){
    switch(Op){
        case myAdd:
            std::cout<<a<<" + "<<b<<" = "<<Addition(a,b)<<"\n";
            break;
        case mySub:
            std::cout<<a<<" - "<<b<<" = "<<Subtraction(a,b)<<"\n";
            break;
        case myMul:
            std::cout<<a<<" * "<<b<<" = "<<Multiplication(a,b)<<"\n";
            break;
        case myDiv:
            std::cout<<a<<" / "<<b<<" = "<<Division(a,b)<<"\n";
            break;
        case myPow:
            std::cout<<a<<" ^ "<<b<<" = "<<Pow(a,b)<<"\n";
            break;
        case myLog:
            std::cout<<"log_"<<a<<"("<<b<<") = "<<Log(a,b)<<"\n";
            break;
    }
}

void GetAndPrintResults(operation Op, double a){
    switch(Op){
        case myNegate:
            std::cout<<" - "<<a<<" = "<<Negative(a)<<"\n";
            break;
        case myAbs:
            std::cout<<"|"<<a<<"| = "<<Abs(a)<<"\n";
            break;
        case myUnPl:
            std::cout<<"Unary Plus("<<a<<") = "<<UnaryPlus(a)<<"\n";
            break;
        case myUnMin:
            std::cout<<"Unary Minus("<<a<<") = "<<UnaryMinus(a)<<"\n";
            break;
        case myExp:
            std::cout<<"exp^"<<a<<" = "<<Exponent(a)<<"\n";
            break;
        case myLn:
            std::cout<<"ln("<<a<<") = "<<Ln(a)<<"\n";
            break;
        case myLog10:
            std::cout<<"log_10("<<a<<") = "<<Log10(a)<<"\n";
            break;
        case mySqrt:
            std::cout<<"√"<<a<<" = "<<Sqrt(a)<<"\n";
            break;
        case myFac:
            std::cout<<a<<"! = "<<Factorial(a)<<"\n";
            break;
        case myCeil:
            std::cout<<"Round up "<<a<<" = "<<Ceil(a)<<"\n";
            break;
        case myFloor:
            std::cout<<"Round down "<<a<<" = "<<Floor(a)<<"\n";
            break;
        case myInv:
            std::cout<<"Inverse "<<a<<" = "<<Inverse(a)<<"\n";
            break;
        case mySin:
            std::cout<<"sin("<<a<<") = "<<Sinus(a)<<"\n";
            break;
        case myCos:
            std::cout<<"cos("<<a<<") = "<<Cosine(a)<<"\n";
            break;
        case myTg:
            std::cout<<"tg("<<a<<") = "<<Tangent(a)<<"\n";
            break;
        case myCtg:
            std::cout<<"ctg("<<a<<")="<<Cotangent(a)<<"\n"
            ;
            break;
    }
}
