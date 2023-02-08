//
// Created by Steve Kenny on 1/25/23.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // vars
    double A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0, B = 0;
    double bodyWeight = 0;
    double wristMeasure = 0;
    double waistMeasure = 0;
    double hipMeasure = 0;
    double forearmMeasure = 0;
    double bodyFat = 0;
    double bodyFatPercentage = 0;
    int choice = 0;


    cout << fixed << showpoint << setprecision(2);
    cout << "Measuring male or female?\n"
    << "[1] Male\n"
    << "[2] Female\n"
    << "Enter the number next to your choice: "; cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter body weight: "; cin >> bodyWeight;
            cout << "Enter wrist measurement: "; cin >> wristMeasure;

            A1 = (bodyWeight * 1.082) + 94.42;
            A2 = wristMeasure * 4.15;
            B = A1 - A2;

/*
            If we use the formula as written
            {bodyFat = bodyWeight - B;}
            it will always output a negative number, which
            doesn't make any sense. Rewriting it as
            {bodyFat = B - bodyWeight;}
            seems to make more sense...
*/

            bodyFat = bodyWeight - B;
            bodyFatPercentage = bodyFat * 100 / bodyWeight;

            cout << "Body fat is: " << bodyFat << endl;
            cout << "Body fat percentage: " << bodyFatPercentage << endl;

            break;

        case 2:
            cout << "Enter body weight: "; cin >> bodyWeight;
            cout << "Enter wrist measurement (at fullest point): "; cin >> wristMeasure;
            cout << "Enter waist measurement (at navel): "; cin >> waistMeasure;
            cout << "Enter hip measurement: "; cin >> hipMeasure;
            cout << "Enter forearm measurement: "; cin >> forearmMeasure;

            A1 = (bodyWeight * 0.732) + 8.987;
            A2 = wristMeasure / 3.140;
            A3 = waistMeasure * 0.157;
            A4 = hipMeasure * 0.249;
            A5 = forearmMeasure * 0.434;
            B = A1 + A2 - A3 - A4 + A5;
            bodyFat = bodyWeight - B;
            bodyFatPercentage = bodyFat * 100 / bodyWeight;

            cout << "Body fat is: " << bodyFat << endl;
            cout << "Body fat percentage: " << bodyFatPercentage << endl;

            break;

        default:
            cout << "Enter 1 or 2..." << endl;
            break;
    }


    return 0;

}