//
// Created by Steve Kenny on 1/16/23.
//
#include <iostream>
#include <cmath>

using namespace std;

void milk(){

    const double LITER_GAL_CONVERSION = 3.78; //carton capacity
    const double COST_TO_PRODUCE = .38;
    const double PROFIT_PER_UNIT = .27;

    int cartons = 0;
    int litersMilk = 0;
    double totalCost = 0;
    double totalProfit = 0;

    cout << "Enter liters of milk produced: "; cin >> litersMilk;

    // Calculation block
    cartons = round(litersMilk / LITER_GAL_CONVERSION); // using round() to round to nearest integer
    totalCost = litersMilk * COST_TO_PRODUCE;
    totalProfit = cartons * PROFIT_PER_UNIT;

    cout << "Gallon Cartons Needed: " << cartons << endl;
    cout << "Total cost: $" << totalCost << endl;
    cout << "Total profit: $" << totalProfit << endl;

}

int main (){
    milk();
    return 0;
}