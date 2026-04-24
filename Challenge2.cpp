#include <iostream>
//Swap the values of two variables
using namespace std;
int main(){
    int var1 = 1;
    int var2 = 2;
    int temp = var1;
    var1 = var2;
    var2 = temp;
    cout<< "Var1 = " << var1 << endl;
    cout<< "Var2 = " << var2 << endl;
    return 0;

}