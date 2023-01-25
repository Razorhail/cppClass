//
// Created by Steve Kenny on 1/16/23.
//
#include <iostream>

using namespace std;

void fuelCalc(){

    int fuelTankCapacity = 0; // in gallons
    int milesPerGallon = 0;
    int range = 0;

    cout << "Enter Fuel tank capacity in gallons: " << endl; cin >> fuelTankCapacity;
    cout << "Enter miles per gallon: " << endl; cin >> milesPerGallon;

    range = milesPerGallon * fuelTankCapacity;

    cout << "Max range of vehicle is: " << range << " miles" << endl;
}

int main(){
    fuelCalc();
    return 0;
}