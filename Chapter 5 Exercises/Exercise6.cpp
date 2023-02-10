//
// Created by Steve Kenny on 2/7/23.
//
#include <iostream>

using namespace std;

int main() {

    int i, num;
    bool prime = true;

    cout << "Enter a positive integer: "; cin >> num;

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1){
        prime = false;
    }

    // loop to check if num is prime
    for (i = 2; i <= num/2; ++i){
//        cout << i;
        if (num % i == 0){
            prime = false;
            break;
        }
    }

    if (prime){ // shorthand bool check instead of (prime == true)
        cout << num << " is a prime number";
    }else{
        cout << num << " is not a prime number";
    }
    return 0;
}
