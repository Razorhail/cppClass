//
// Created by Steve Kenny on 2/14/23.
//
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main(){

    double r = 0;
    cout << "Square root of PI is: " << sqrt(PI) << endl;
    cout << "Enter radius: "; cin >> r;
    cout << "Sphere surface area is: " << 4 * PI * pow(r,2) << endl;
    cout << "Sphere volume is: " << (4.0/3.0) * PI * pow(r,3) << endl;

}
