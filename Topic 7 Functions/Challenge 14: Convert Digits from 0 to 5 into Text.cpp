#include <iostream>

using namespace std;

/*Your task is to write a function digit_text. In the function 
parameter, you will pass the value of type int, and it will return a string in the output.
Your function should:
Convert a digit from 0 to 5 into words;
If a number is other than 0 to 5, your program should return an invalid number;
Store your result in the variable of type string.*/

string digit_text(int number);
string word;

int main(){
    int number;
    cout <<"Enter a number from 0  - 5";
    cin >> number;
    cout << digit_text(number);

    return 0;
}

string digit_text(int number) {
    switch (number) {
        case 0:
            word = "Zero";
            return "number = "+word;
        case 1:
            word = "One";
            return "number = "+word;
        case 2:
            word = "Two";
            return "number = "+word;
        case 3:
            word = "Three";
            return "number = "+word;
        case 4:
            word = "Four";
            return "number = "+word;
        case 5:
            word = "Five";
            return "number = "+word;
        default:
            return "You entered an invalid number!";
    }

}
