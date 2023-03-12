//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>

using namespace std;

const int BASE_ARRAY_SIZE = 20;

void inputArray(int alpha[BASE_ARRAY_SIZE]){
    for (int i = 0; i < BASE_ARRAY_SIZE; i++){
        cout << "Enter values for array: "; cin >> alpha[i]; // comment cin out if you want to use default val
    }
}

void doubleArray(int beta[], int alpha[BASE_ARRAY_SIZE]){
    for (int i = 0; i < BASE_ARRAY_SIZE; i++){
        beta[i] = 2 * alpha[i];
    }
}

void copyAlphaBeta(int matrix[10][4], int alpha[BASE_ARRAY_SIZE], int beta[BASE_ARRAY_SIZE]){
    int alphaCount = 0;
    int betaCount = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            matrix[i][j] = alpha[alphaCount];
            alphaCount++;
        }
    }
    for (int i = 5; i < 10; i++){
        for (int j = 0; j < 4; j++){
            matrix[i][j] = beta[betaCount];
            betaCount++;
        }
    }
}

void printArray(int array[]){

    for (int i = 0; i < BASE_ARRAY_SIZE; i++){
        if (i%15 ==0)
            cout << endl;
        cout << array[i] << " ";
    }
}

void printMatrix(int matrix[10][4]){

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";
}

int main(){

    int alpha[20]/* = {0,1,2,3,4,5,
                     6,7,8,9,10,11,
                     12,13,14,15,16,
                     17,18,19}*/; // Uncomment this for default vals
    int beta[20];
    int matrix[10][4];


    inputArray(alpha);
    cout << "Alpha array vals: ";
    printArray(alpha);
    cout << endl << endl;
    doubleArray(beta, alpha);

    cout << "Beta array vals: ";
    printArray(beta);
    cout << endl << endl;

    cout << "Matrix array vals: " << endl;
    copyAlphaBeta(matrix, alpha, beta);
    printMatrix(matrix);

    return 0;
}