#include <iostream>
#include "AllFunctions.cpp"
#include <cmath>
int main() {
    bool ContinueOrNot = 1;
    do{
        operation ChosenOperation = askForNumberOfOperation();
        if(bool UorB = UnaryOrBinary(ChosenOperation)){
            double num = TypeNumber();
            GetAndPrintResults(ChosenOperation, num);
        }
        else{
            double num1 = TypeNumber();
            double num2 = TypeNumber();
            GetAndPrintResults(ChosenOperation, num1, num2);
        }
        std::cout<<"Do you want to do one more operation?\n1 - Yes\n0 - No\n";
        std::cin>>ContinueOrNot;
    } while(ContinueOrNot);
    return 0;
}
