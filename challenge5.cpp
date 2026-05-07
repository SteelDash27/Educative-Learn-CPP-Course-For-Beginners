#include <iostream>
//you are given the total number of seconds, and your task
// is to display the number of hours, minutes, and seconds in it.
using namespace std;
 
int main(){
    int hours,minutes,seconds;

    seconds = 3870;
 
    hours = seconds / 3600;
    seconds = seconds % 3600;
 
    minutes = seconds / 60;
    seconds = seconds % 60;

    cout << "Hours : " << hours << endl;
    cout << "Minutes : " << minutes << endl;
    cout << "Seconds : " << seconds << endl;

    return 0;
}
