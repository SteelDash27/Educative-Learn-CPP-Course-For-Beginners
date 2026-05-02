#include <iostream>
using namespace std;
//You are given a radius r of the sphere. Your task is to find 
//the area of the sphere using the following formula:

int main(){
    const double pi = 3.14;
    double r = 10.9;
    double area = 4 * pi * (r * r);

    cout << "Radius : " << r << endl;
    cout << "The are of the sphere is : " << area;

    return 0;
}