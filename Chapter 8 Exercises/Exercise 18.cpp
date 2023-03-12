//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 4;

void faceUp(int array[ROWS][COLS]){

    int num = 1;
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            array[i][j] = num;
            num++;

            if (num > 2 * ROWS)
                num = 1;
        }
    }
}

void faceDown(int array[ROWS][COLS]){

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            array[i][j] = 0;
        }
    }
}

void printTable(int arrray[ROWS][COLS]){

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arrray[i][j] << " ";
        }
        cout << endl;
    }
}

bool cardsUp(int array[ROWS][COLS]) {

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (array[i][j] == 0)
                return false;
        }
    }
    return true;
}

void shuffleItUp(int array[ROWS][COLS]){

    for (int i = 0; i < ROWS * COLS; i++){
        int a = rand() % ROWS;
        int b = rand() % COLS;
        int c = rand() % ROWS;
        int d = rand() % COLS;

        int tempArr = array[a][b];
        array[a][b] = array[c][d];
        array[c][d] = tempArr;
    }
}

int main(){ // This was annoying to test

    srand(time(nullptr));

    int faceUpArray[ROWS][COLS];
    int faceDownArray[ROWS][COLS];

    int row1, row2, col1, col2;
    int turnCount = 0;

    faceUp(faceUpArray);
    faceDown(faceDownArray);

    cout << "Initial: " << endl;
    printTable(faceUpArray);
    shuffleItUp(faceUpArray);

    cout << "Begin: " << endl;
    printTable(faceDownArray);

    do {
        turnCount++;

        cout << "Select 2 cards" << endl;
        cout << "First card (row and column): ";
        cin >> row1 >> col1;
        cout << "Second card (row and column): ";
        cin >> row2 >> col2;
        if (row1 == row2 && col1 == col2) {
            cout << "Don't pick same cards, it ruins the game" << endl;
        }else if(faceDownArray[row1][col1] != 0 || faceDownArray[row2][col2] != 0) {
            cout << "Don't pick cards that have already been picked..." << endl;
        }else if(faceUpArray[row1][col1] != faceUpArray[row2][col2]){
            cout << "Cards don't match" << endl;
        }else{
            cout << "Card 1 matches card 2" << endl;
            faceDownArray[row1][col1] = faceUpArray[row1][col1];
            faceDownArray[row2][col2] = faceUpArray[row2][col2];
        }

        cout << "Progress check:" << endl;
        printTable(faceDownArray);

    } while (!cardsUp(faceDownArray));

    if (cardsUp(faceDownArray))
        cout << "\nCongrats, you did it!" << endl;

    return 0;
}