#include <iostream>
/*In this challenge, you are given a weekday number. 
Your task is to display 
the corresponding day name to the
 console using the switch statement.
*/
using namespace std;

int main(){
    int dayofweek;
 
    cout << "Enter in a numbe from 1 - 7" << endl;
    cin >> dayofweek;

    switch(dayofweek){
        case 1 :
        cout << "Monday";
        break;
     
        case 2 :
        cout << "Tuesday";
        break;
     
        case 3:
        cout << "Wednesday";
        break;
     
        case 4 :
        cout << "Thursday";
        break;
     
        case 5 :
        cout << "Friday";
        break;
     
        case 6 :
        cout << "Saturday";
        break;
     
        case 7 :
        cout << "Sunday";
        break;
     
        default:
        cout << "Invalid Output";
    }
    return 0;
}
