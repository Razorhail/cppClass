//
// Created by Steve Kenny on 1/25/23.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double mass = 0; //in grams
    double density = 0; //in grams per cubic cm

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter mass in grams: "; cin >> mass;
    cout << "Enter density as grams per cubic cm: "; cin >> density;

    cout << "The volume is " << mass / density << " cubic cm" << endl;

    return 0;
}