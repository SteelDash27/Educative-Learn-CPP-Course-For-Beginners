#include <iostream>
/*
In this challenge, you are given a character. Your task is to find whether 
the given character is an upper-case alphabet, 
a lower-case alphabet, or a non-alphabetic character.
*/
using namespace std;

int main(){
    char character;
    cout << "Enter in a character : " << endl;
    cin >> character;

    if(65 <= (int)character && (int)character <= 90){
        cout << " upper-case alphabet" << endl;
        
    }else if(97 <= (int)character && (int)character <= 122 ){
        cout << " lower-case alphabet" << endl;

    }else{
        cout << "not an alphabet" << endl;
    }

    return 0;
}