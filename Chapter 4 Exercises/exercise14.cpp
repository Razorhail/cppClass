//
// Created by Steve Kenny on 1/25/23.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    double fee = 0;
    double hours = 0;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the number of hours a car is parked: "; cin >> hours;

    if ((hours >= 0) && (hours <= 3)){

        fee = 5;
        cout << "The Parking Fee is: $" << fee << endl;

    }else if ((hours > 3) && (hours <= 9)){

        fee = 6 * int(hours + 1);
        cout << "The Parking Fee is: $" << fee << endl;

    }else if ((hours > 9) && (hours <= 24)){

        fee = 60;
        cout << "The Parking Fee is: $" << fee << endl;
    }else{
        cout << "Vehicles towed at owners expense after 24 hours." << endl;
    }

    return 0;

}