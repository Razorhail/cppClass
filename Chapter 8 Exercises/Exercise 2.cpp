//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>

using namespace std;

int smallestIndex(int array[], int arraySize){

    int smallestInt = 0, smallestIntIndex = 0;

    for (int i = 0 ; i < arraySize ; i++){
//        cout << i << " = " << array[i] << endl;
        if (array[i] < smallestIntIndex) {
            smallestInt = array[i];
            smallestIntIndex = i;
        }
        if (smallestInt > array[i]) {
            smallestInt = array[i];
            smallestIntIndex = i;
        }
    }
    return smallestIntIndex;
}

int main(){

    int numbers[6] = {0,3,1,1,6,5};

    cout << "Index of smallest int is: " << smallestIndex(numbers, 6);

    return 0;
}