#include <iostream>
/*
In this challenge, you are provided with the salaries of two people.
 Your task is to find the person with the highest salary.
*/
using namespace std;

int main(){
    int salary1 = 56000;
    int salary2 = 89000;
    string compare;
 
    compare = (salary1>salary2) ? "Person1 earns more":"Person2 earns more";
    cout << compare;
 
    return 0;
}
