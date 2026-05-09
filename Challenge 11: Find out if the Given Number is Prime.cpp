#include <iostream>

/*You are given a number. Your task is to 
find whether the given number is prime or not.
*/

using namespace std;

int main(){
    int number = 31;

    for(int count = 2; count < number; count++){

        if((number%count) == 0){
            cout << "not prime";
            break;
        }else{
            if(count + 1 == number){
                cout << "prime";
            }
        }
    
    }

    return 0;
}
