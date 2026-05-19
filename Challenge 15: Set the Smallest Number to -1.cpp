#include <iostream>

using namespace std;

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
