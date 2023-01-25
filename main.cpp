//
// Created by Steve Kenny on 1/11/23.
//
#include <iostream>
#include <cmath>

using namespace std;

void rectCheck()
{
    cout << "Square side calculator" << endl;

    float length;
    float width;
    float perimeter;
    float area;

    cout << "Enter length: ", cin >> length;
    cout << "Enter Width: ", cin >> width;

    perimeter = 2 * (length + width);
    area = length * width;

    cout << "\nLength: " << length<<endl;
    cout << "Width: " << width<< endl;
    cout << "Perimeter is: " << perimeter << endl;
    cout << "Area is: " << area << endl;
}
void rightAngleCheck()
{
    cout << "\nRight angle check" << endl;

    float leg1;
    float leg2;
    float hypo;

    cout << "Enter first leg: ", cin >> leg1;
    cout << "Enter second leg: ", cin >> leg2;
    cout << "Enter Hypotenuse: ", cin >> hypo;

//     Using 'cmath' function 'hypot()' to calculate a^2+b^2 returning the square root of c^2
    cout << "\nCalculated hypotenuse is: " << hypot(leg1,leg2) << endl;
//     Could instead use this but the former is cleaner
//    cout << "\nCalculated hypotenuse is: " << sqrt(pow(leg1, 2) + pow(leg2, 2));

    if (hypot(leg1, leg2) == hypo){
        cout << "This is a right angle" << endl;
    } else {
        cout << "This is not a right angle" << endl;
    }

}
int main() {
    string choice = "";
    string prompt = "Make a selection:\n"
            "[1] Box Check\n"
            "[2] Right Angle Check";

    top: // Experiment with labels
    cout << prompt << endl; cin >> choice;
    if (choice == "1") {
        rectCheck();
    } else if (choice == "2"){
    rightAngleCheck();
    } else{
        goto top;
    }
    return 0;
}