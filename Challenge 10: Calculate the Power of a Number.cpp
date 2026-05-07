#include <iostream>

/*You are given a base and an exponent.
Your task is to calculate the power of the number.*/

using namespace std;

int main(){
    int base = 2;
    int exponent = 3;
    int result = 1;
    
    for(int count = 1;count <= exponent; count ++){
        result *= base;
        cout << result << endl;
    }

    cout << result << endl;

    return 0;
}
