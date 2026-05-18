#include <iostream>
/*
You are given a number. Your task is to find 
whether the given number is a palindrome or not.
A number is a palindrome if it reads the same 
backward as forward, e.g., 1221.
*/
using namespace std;

int main(){
    int number = 1234, rem, ognum = number;
    //int ognum = number;
    int reverse = 0;

    while(number > 0){
        rem = number % 10;
        number /= 10;
        reverse = reverse * 10 + rem;
    }

    cout << "Original number : " << ognum;
    cout << "\nRevese number : " << reverse << endl;

    if(number == reverse){
        cout << "is palindrome";
    }else{
        cout << "\nnot a palindrome";
    }

    return 0;
}