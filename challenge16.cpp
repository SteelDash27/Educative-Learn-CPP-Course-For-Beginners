#include <iostream>
#include <string>

using namespace std;
/*
The aim of this challenge is to design a calculator that takes operands 
in its input and performs one of the following operations on them:
Addition, Subtraction ,Multiplication ,Division.
*/

double test(double num1, char operate, double num2);

int main(){
    double number1;
    double number2;
    char rator;

    cout << "Enter in a number ";
    cin >> number1;
    cout << "Enter in another number ";
    cin >> number2;
    cout << "Enter in a operator: + - * / \n";
    cin >> rator;

    cout << test(number1, rator, number2);
    
    return 0;
}

double test(double num1, char operate, double num2){
    switch(operate){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1*num2;
        case '/':
            return num1/num2;
        default:
            cout << "Invalid operator";
    }
}