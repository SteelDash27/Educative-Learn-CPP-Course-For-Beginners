#include <iostream>

//Create a program that takes a given letter and the tells us the letter before it in the alphabet.
using namespace std;

int main(){
    char character;
    char character_before;

    cout << "Enter a letter of the alphabet : " << endl;
    cin >> character;

    cout <<"The letter you entered was : " << character << endl;
    character_before = (char)((int)character - 1);
    cout << "The letter before is : " << character_before;

    return 0;
}