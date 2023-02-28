//
// Created by Steve Kenny on 1/16/23.
//
#include <iostream>
#include <iomanip>

using namespace std;

void hddCapacityCalc(){

    double listedCapacity = 0; // in gigabytes
    double actualSize = 0; // in gigabytes
    const int DIVISOR = 1024 * 1024 * 1024;

    cout << setprecision(2);
    cout << fixed;
    cout << "Enter listed capacity in gigabytes: "; cin >> listedCapacity;
    actualSize = (listedCapacity * 1000000000) / DIVISOR;
    cout << actualSize << " GB's" << endl;
}

int main(){
    hddCapacityCalc();
    return 0;
}