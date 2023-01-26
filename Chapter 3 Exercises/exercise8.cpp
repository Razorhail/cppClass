//
// Created by Steve Kenny on 1/25/23.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double salaries = 0;
    double merchandiseCost = 0;
    double rent = 0;
    double estimatedElectricCost = 0;
    double markup = 0;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the total yearly cost of all salaries: $"; cin >> salaries;
    cout << "Enter total yearly cost of merchandise: $"; cin >> merchandiseCost;
    cout << "Enter the yearly cost of rent: $";  cin >> rent;
    cout << "enter the estimated yearly cost of electricity: $"; cin >> estimatedElectricCost;

    // merchandise cost increased by 15% to account for sales price and keep 10% profit
    markup = ((merchandiseCost * 1.15) + rent + salaries + estimatedElectricCost) * 0.1;
    cout << "The merchandise should be marked up: $" << markup << endl;

    return 0;
}