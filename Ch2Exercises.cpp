//
// Created by Steve Kenny on 1/18/23.
//

#include <iostream>
#include <cmath>
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
    cout << "The actual space available is " << actualSize << " GB's" << endl;
}

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

void fuelCalc(){

    int fuelTankCapacity = 0; // in gallons
    int milesPerGallon = 0;
    int range = 0;

    cout << "Enter Fuel tank capacity in gallons: " << endl; cin >> fuelTankCapacity;
    cout << "Enter miles per gallon: " << endl; cin >> milesPerGallon;

    range = milesPerGallon * fuelTankCapacity;

    cout << "Max range of vehicle is: " << range << " miles" << endl;
}

void rice(){

    const int METRIC_TON = 2205;

    double riceBagCapacityInPounds = 0;
    double bagsNeeded = 0;

    cout << "Enter rice bag capacity in pounds: "; cin >> riceBagCapacityInPounds;
    bagsNeeded = METRIC_TON / riceBagCapacityInPounds;
    cout << "Bags needed to store 1 metric ton of rice: " << bagsNeeded << endl;
}

void stocks(){

    const double SERVICE_CHARGE = 0.015;
    int sharesSold = 0;
    double purchasePricePerShare = 0;
    double sellingPricePerShare = 0;
    double totalInvested = 0;
    double serviceChargeCost = 0;
    double profitAndLoss = 0;
    double amountReceived = 0;
    double totalSale = 0;

    cout << "Enter shares sold: "; cin >> sharesSold;
    cout << "Enter purchase price/share: "; cin >> purchasePricePerShare;
    cout << "Enter price of share at time of sale: "; cin >> sellingPricePerShare;

    // Calculate
    totalInvested = sharesSold * purchasePricePerShare;
    totalSale = sharesSold * sellingPricePerShare;
    profitAndLoss = totalSale - totalInvested;
    serviceChargeCost = totalSale * SERVICE_CHARGE;
    amountReceived = profitAndLoss - serviceChargeCost;

    cout << "Total invested: $" << totalInvested << endl;
    cout << "Service Charge: $" << serviceChargeCost << endl;
    cout << "Realized gain/loss: $" << profitAndLoss << endl;
    cout << "Total received, less service charge: $" << amountReceived << endl;

}

int main(){

    int choice;
    string PROMPT = "\nPlease select from one of the 5 choices below by entering the bracketed number\n"
                    "Enter any other key to exit the program.\n\n"
                    "[1] Exercise 11\n" // fuel calculator
                    "[2] Exercise 14\n" // hard drive space calculator
                    "[3] Exercise 16\n" // milk carton calculator
                    "[4] Exercise 22\n" // rice calculator
                    "[5] Exercise 23\n";// stock calculator

    top: // Playing with labels for flow control
    cout << PROMPT << endl;
    cout << ": "; cin >> choice; cout << endl;

    switch (choice){ // trying switch instead of 'if' statements
        case 1:
            fuelCalc();
            goto top;
        case 2:
            hddCapacityCalc();
            goto top;
        case 3:
            milk();
            goto top;
        case 4:
            rice();
            goto top;
        case 5:
            stocks();
            goto top;
    }
    return 0;
}
