//
// Created by Steve Kenny on 2/7/23.
//
#include <iostream>

using namespace std;


int main(){

    int number;
    int i = 1;
    int factorial = 1;

    cout << "Enter a positive integer: "; cin >> number;

    while (i <= number){
        factorial = factorial * i;
        i++;
    }

    cout <<  number << "! is "<< factorial << endl;

    return 0;

}