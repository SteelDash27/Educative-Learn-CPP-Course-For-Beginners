#include <iostream>
//In this challenge, your task is to convert the variable value from double to an int.   

using namespace std;

int main(){
    
    double double_value = 70.986;
    int int_value ;
    
    int_value = (int) double_value;
    cout << "Value: " << int_value;
    
    return 0;
}
