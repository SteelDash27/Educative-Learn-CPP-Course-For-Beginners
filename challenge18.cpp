#include <iostream>
/*
Your task is to write a recursive function count_digits. In the function parameter, 
you will pass the value of type int, and function will return an int value in the output.
Your function should count the total number of digits in a
number and return the number of digits in output. Your solution should
work for both positive and negative values, including 0.*/
using namespace std;

int count_digits(int number);
int digit = 0;

int main(){
    int number = 123456789;
    digit = count_digits(number);
    cout << "There are "<<digit<<" digits in the number "<<number;
    return 0;
}

int count_digits(int number){
    int number2;
    if(number==0){
        return digit;
        //sTOP the recursive loop
    }
    else {
        number /= 10;
        digit++;
        number = count_digits(number);
        return digit;
    }
}
