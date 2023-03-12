//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>
#include <cmath>

using namespace std;

double mean(double intList[], int n){
    double sum = 0;

    for (int i = 1; i <= n; i++)
        sum += intList[i];
    return sum / n;
}

double standardDeviation(double intList[], double average, int n){
    double stdDeviation = 0;
    for (int i = 1; i <= n; i++)
        stdDeviation += pow((intList[i] - average), 2);
    stdDeviation = sqrt(stdDeviation / n);
    return stdDeviation;
}

int main(){

    double intList[100];
    double average, stdDeviation;
    int numVal;

    cout << "Enter a value: "; cin >> numVal;

    for (int i = 1; i <= numVal; i++){
//        intList[i] = i; //TODO this didnt work...
        cout << "Enter val " << i << ": "; cin >> intList[i];
    }// Fixed it
    average = mean(intList, numVal);
    stdDeviation = standardDeviation(intList, average, numVal);

    cout << "Average is: " << average << endl;
    cout << "Standard Deviation is: " << stdDeviation << endl;

    return 0;
}