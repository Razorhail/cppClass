//
// Created by Steve Kenny on 2/7/23.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double popA, popB, years = 0;
    double growthA, growthB;

    cout << "Enter population for group A: "; cin >> popA;
    cout << "Enter growth rate for group A (as decimal): "; cin >> growthA;
    cout << "Enter population for group B: "; cin >> popB;
    cout << "Enter growth rate for group B (as decimal): "; cin >> growthB;

    while (popA < popB){
        popA = popA * (1 + (growthA / 100));
        popB = popB * (1 + (growthB / 100));
        years++;
    }

    cout << fixed << setprecision(0);
    cout << "Group A will be greater than or equal to Group B in " << years << " years" << endl;
    cout << "Group populations will be: \n"
            "Group A: " << popA <<
            "\nGroup B: " << popB << endl;

    return 0;

}