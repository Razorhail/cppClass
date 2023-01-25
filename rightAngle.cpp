//
// Created by Steve Kenny on 1/11/23.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float leg1;
    float leg2;
    float hypo;

    cout << "Enter length: ", cin >> leg1;
    cout << "Enter Width: ", cin >> leg2;
    cout << "Enter Hypo: ", cin >> hypo;

    cout << hypot(leg1,leg2) << endl;

    if (hypot(leg1, leg2) == hypo){
        cout << "Right triangle" <<endl;
        return 1;
    } else {
        cout << "Not right triangle" << endl;
        return 0;
    }

}