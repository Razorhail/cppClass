//
// Created by Steve Kenny on 2/16/23.
//
#include <iostream>
#include <cmath>

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

    if (prime) {
        cout << num << " is prime" << endl;
        return num;
    }else {
        cout << num << " is not prime" << endl;
    }

    return 0;
}

void reverseDigit(int &val){ // re-using this from before because I'm lazy

    int reversedInt = 0;
    int remainder = 0;

    while (val != 0){
        remainder = val % 10;
        reversedInt = reversedInt * 10 + remainder;
        val /= 10;
    }
    val = reversedInt;
//    return reversedInt;
}

void doubleUp(int &val){
    val *= 2;
}

void raiseTheRoof(int &val){
    int power = 2;
    cout << "Enter desired power to raise to from 2-4: "; cin >> power;
    if ((power <= 4) && (power >= 2)){
        val = pow(val, power);
}else{
        cout << "Not a valid power" << endl;
    }
//    return 0;
}

int morePower(int val1, int val2){
    int result;

    if (val2 == 0){
        return 1;
    } else {
        result = val1;
        for (int i = 2; i <= val2; i++)
            result = result * val1;
        return result;
    }
}

void sumOfAllInts(int &val){

    int sum = 0;

    while (val > 0){
        sum += val % 10;
        val /= 10;
    }
    val = sum;
//    return sum;
}

void powerTrip(int &val){
    int num1, num2;

    if (val < 100){
        num1 = val % 10;
        num2 = val / 10;
        val = morePower(num2, num1);
    }
}

void treePower(int &val){
    int num1, num2;
    if (val > 99){
        num1 = val % 10;
        if (num1 <= 4){
            num2 = val / 10;
            val = morePower(num2, num1);
        }
    }
}

void addTen(int &val){
    if (val < 10) {
        val += 10;
        cout << "Added 10" << endl;
    }
}

int generateRandNum(){

    int randNum = 0;

    int seed = time(NULL); // store current epoch time as seed value to ensure that we get different numbers
    // We use the NULL keyword to tell time() that we just want the value, not the object

    srand(seed);
    randNum = 10 + rand() % 100;
    if (randNum > 99)
        randNum -= 10;

    return randNum;
}

int main(){

    int randNum = generateRandNum();
    int selection = 0;

    do {

        cout << "Your number is: " << randNum << endl;

        cout << "Make a selection:\n"
        << "[1] Double it\n"
        << "[2] Reverse it\n"
        << "[3] Raise it to a power\n"
        << "[4] Sum all the digits\n"
        << "[5] Raise first digit to power of second (if 2 digit)\n"
        << "[6] Raise first two digits by power of third (if 3 digit)\n"
        << "[Any other key to exit]\n";

        cin >> selection;

        switch (selection) {
            case 1:
                doubleUp(randNum);
                break;
            case 2:
                reverseDigit(randNum);
                break;
            case 3:
                raiseTheRoof(randNum);
                break;
            case 4:
                sumOfAllInts(randNum);
                break;
            case 5:
                powerTrip(randNum);
                break;
            case 6:
                treePower(randNum);
                break;
            default:
                break;
        }
        addTen(randNum);
        isPrime(randNum);

    } while (cin);

    return 0;
}