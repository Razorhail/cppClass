//
// Created by Steve Kenny on 2/14/23.
//
#include <iostream>

using namespace std;

int reverseDigit(int val){

    int reversedInt = 0;
    int remainder = 0;

    while (val != 0){
        remainder = val % 10; // Take val % 10. This ends up taking the last digit in the integer
        reversedInt = reversedInt * 10 + remainder; // Takes reversedInt * 10 and adds new remainder
        val /= 10; // Take quotient of val and 10
    } // Essentially this loop takes 'bites' of the tail of the integer and spits it out in reverse using some clever
    // math. It makes a lot more sense to work it out on paper than to see it here.
    return reversedInt;
}

int main (){

    int val = 0;

    cout << "Enter integer: "; cin >> val;
    cout << reverseDigit(val);

    return 0;

}