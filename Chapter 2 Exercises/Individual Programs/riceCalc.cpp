//
// Created by Steve Kenny on 1/16/23.
//
#include <iostream>

using namespace std;

void rice(){

    const int METRIC_TON = 2205;

    double riceBagCapacityInPounds = 0;
    double bagsNeeded = 0;

    cout << "Enter rice bag capacity in pounds: "; cin >> riceBagCapacityInPounds;
    bagsNeeded = METRIC_TON / riceBagCapacityInPounds;
    cout << "Bags needed to store 1 metric ton of rice: " << bagsNeeded << endl;
}

int main(){
    rice();
    return 0;
}