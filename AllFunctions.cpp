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
    Prog=4,
    Conv=5
};
#include <iostream>
#include <cmath>
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

double Pow(double a, double b) {
    if (b != 0) {
        return pow(a, b);
    }
    else return 1;
}

double Negative(double a) {
    return -a;
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

double Abs(double a) {
    if (a >= 0) {
        return a;
    }
    else return -a;
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

double Cosinus(double a) {
    return 1 - Pow(Sinus(a), 2);
}

double Tangens(double a) {
    return Sinus(a) / Cosinus(a);
}

double Cotangens(double a) {
    return Cosinus(a) / Sinus(a);
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



