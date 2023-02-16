//
// Created by Steve Kenny on 2/15/23.
//
#include <iostream>

using namespace std;

int isPrime(int num) { // Cannibalized and re-purposed previous prime number program from Chapter 5 Exercise 6

    int i;
    bool prime = true;

    if (num == 0 || num == 1){
        prime = false;
    }

    for (i = 2; i <= num/2; ++i){
        if (num % i == 0){
            prime = false;
            break;
        }
    }

    if (prime)
        return num;

    return 0;
}

int main(){

    int bottomRange = 0, topRange = 0;
    int sumOfPrimes = 0;
    int numberOfTwinPrimes = 0;

    cout << "Enter two numbers and I'll sum all the primes between them: "; cin >> bottomRange >> topRange;

    if (topRange < bottomRange){
        int temp = bottomRange;
        bottomRange = topRange;
        topRange = temp;
    }


    for (bottomRange; bottomRange <= topRange; bottomRange++){
        sumOfPrimes += isPrime(bottomRange);
        if (isPrime(bottomRange + 2)){
            numberOfTwinPrimes++;
        }
    }

    cout << "Sum of primes: " << sumOfPrimes << endl;
    cout << "Number of twins: " << numberOfTwinPrimes << endl;
}