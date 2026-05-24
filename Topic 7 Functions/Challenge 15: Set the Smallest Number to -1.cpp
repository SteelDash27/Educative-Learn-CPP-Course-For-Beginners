#include <iostream>

using namespace std;
/*
Your task is to write a function minimum. In the function parameter, you will pass 
two values of type int by reference, and function will set the smallest number of the two to -1.
Your function should: Compare the values of number1 and number2 and set 
the variable with the smallest value to -1;
If values of both number1 and number2 are equal, then set both to -1.
*/
void minimum(int &num1,int &num2);

int main(){

    int number1 = 14;
    int number2 = 116;

    minimum(number1,number2);

    cout << "number1 = "<< number1<< endl;
    cout << "number2 = "<< number2;

    return 0;
}

void minimum(int &num1,int &num2){

    if(num1< num2){
        num1 = -1;
    }else if(num1 == num2){
        num1 = -1;
        num2 = -1;
    }else{
        num2 = -1;
    }

}
