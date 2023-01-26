//
// Created by Steve Kenny on 1/25/23.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    const double PI = 3.14159;

    double height = 0;
    double radius = 0;

    cout << "Enter the height of the cylinder: ";  cin >> height;
    cout << "Enter the radius of the base of the cylinder: "; cin >> radius;

    cout << fixed << showpoint << setprecision(2);
    cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;
    cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;


    return 0;
}