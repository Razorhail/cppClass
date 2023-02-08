//
// Created by Steve Kenny on 2/7/23.
//
#include <iostream>

using namespace std;

int main(){

    const int UNITS = 50;
    int vacantUnit = 0, maxUnits = 0;
    int rent = 0, rentIncrease = 0, maxRent = 0;
    int maintenance = 0;
    int currentCollectedRent = 0;

    cout << "Enter rent to occupy all units: "; cin >> rent;
    cout << "Enter increase in rent: "; cin >> rentIncrease;
    cout << "Enter maintenance cost/unit: "; cin >> maintenance;

    while ((UNITS - vacantUnit) > 0){

        currentCollectedRent = (UNITS - vacantUnit) * (rent - maintenance);

        if (currentCollectedRent > maxRent){
            maxRent = currentCollectedRent;
            maxUnits = (UNITS - vacantUnit);
        }
        rent += rentIncrease;
        vacantUnit++;
    }
    cout << "Max units is: " << maxUnits;
}