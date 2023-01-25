//
// Created by Steve Kenny on 1/16/23.
//
#include <iostream>
#include <cmath>

using namespace std;



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
    stocks();
    return 0;
}