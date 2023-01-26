//
// Created by Steve Kenny on 1/25/23.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.1416;

int main(){

    string shape;
    double height = 0;
    double radius = 0;
    double width = 0;
    double length = 0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the shape type (rectangle, circle, cylinder): "; cin >> shape;

    if ( shape == "rectangle"){
        cout << "Enter length of rectangle: "; cin >> length;
        cout << "Enter width of rectangle: "; cin >> width;

        cout << "Perimeter of rectangle is: " << 2 * (length + width) << endl;
        cout << "Area is: " << length * width << endl;
    } else if (shape == "circle"){
        cout << "Enter radius: "; cin >> radius;

        cout << "Circumference of circle is: " << 2 * PI * radius << endl;
        cout << "Area is: " << PI * pow(radius, 2.0) << endl;
    } else if (shape == "cylinder"){
        cout << "Enter height of cylinder: "; cin >> height;
        cout << "Enter radius: "; cin >> radius;

        cout << "Surface area of cylinder is: " << 2 * PI * radius * height + 2 * PI * pow(radius,2.0) << endl;
        cout << "Volume is: " << PI * pow(radius, 2.0) * height << endl;
    }else{
        cout << "The program does not handle " << shape << endl;
    }

    return 0;
}