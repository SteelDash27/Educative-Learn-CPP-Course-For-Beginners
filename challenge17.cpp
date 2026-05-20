#include <iostream>

/*
Calculate the Power of a Number Recursively:
Your task is to write a recursive function power. In the function parameter, 
you will pass base and the exponent of type int and the function will return an int 
value in the output. It is assumed that only a non-negative value for the exponent 
will be used.
*/

int power(int base, int exponent);

using namespace std;

int main(){
    int base = 8, exponent = 3, answer;

    answer = power(base,exponent);
    cout << "Base "<< base << " to the power of " << exponent<< " is "<<answer;

    return 0;
}

int power(int base, int exponent){
    int number,count = 1;
    if(exponent < 0){
        return -1;
    }
    else if(exponent == 0 ){
        return 1;
    }else{

        base *= power(base,exponent -1);
        number = base;
        return number;
    }
}