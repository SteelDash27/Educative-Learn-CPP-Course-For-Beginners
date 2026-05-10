#include <iostream>
/*
You are given a decimal number. Your task 
is to convert it into a binary number.
*/
using namespace std;

int main(){
    int decimal = 10;
    string binary;

    while(decimal != 0){
        if(decimal % 2 == true){
            binary = "1" + binary;
        }else{
            binary = "0" + binary;
        }
        decimal /= 2;
    }

    cout << "binary = " << binary << endl;
    return 0;
}