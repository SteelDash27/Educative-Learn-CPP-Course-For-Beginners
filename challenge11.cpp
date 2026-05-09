#include <iostream>

/*You are given a number. Your task is to 
find whether the given number is prime or not.
*/

using namespace std;

int main(){
    int number = 31;
    bool isprime;

    if(number <=1){
        isprime = false;
    }

    for(int count = 2; count < number; count++){

        if((number%count) == 0){
            isprime = false;
            break;
        }else{
            if(count + 1 == number){
                isprime = true;
            }
        }
    
    }
    if(isprime == true){
        cout << "prime";
    }else{
        cout << "not prime";
    }

    return 0;
}