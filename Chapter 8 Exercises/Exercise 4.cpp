//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


const int STUDENTS = 50;
const int RANGES = 8;
const int RANGE_SPAN = 25;

int readFile(ifstream &infile , int testScore[]){
    int score, count = 0;
    infile >> score;
    while (infile && count < STUDENTS){
        testScore[count] = score;
        count ++;
        infile >> score;
    }
    return count;
}

void findRange(int testScore[], int count, int ranges[]){
    int score;
//    for (int i = 0; i < RANGES; i++){
//        ranges[i] = 0;
//    }
    for (int i = 0; i < count; i++){
        score = testScore[i];
        if (score >= 0 && score <= 24)
            ranges[0]++;
        else if (score >= 25 && score <= 49)
            ranges[1]++;
        else if (score >= 50 && score <= 74)
            ranges[2]++;
        else if (score >= 75 && score <= 99)
            ranges[3]++;
        else if (score >= 100 && score <= 124)
            ranges[4]++;
        else if (score >= 125 && score <= 149)
            ranges[5]++;
        else if (score >= 150 && score <= 174)
            ranges[6]++;
        else if (score >= 175 && score <= 200)
            ranges[7]++;
        else{
            cout << "Scores must be between 0 and 200" << endl;
        }
    }
}

void printRange(int ranges[]){
    int startRange = 0;
    int endRange = 24;

    cout << "\nScore Range \tNumber of Students" << endl;
    for (int i = 0; i < RANGES; i++){
        cout << startRange << "-" << endRange << "\t\t\t" << ranges[i] << endl;

        startRange += RANGE_SPAN;
        endRange += RANGE_SPAN;
    }
}

int main(){

    ifstream infile;
    string filename /*= "forEx4.txt"*/; // Un-comment this for default val
    int count;
    int testScore[STUDENTS];
    int ranges[RANGES] = {0};

    cout << "Enter filename: "; cin >> filename; // Comment the cin if using default val

    infile.open(filename);

    count = readFile(infile, testScore);
    findRange(testScore, count, ranges);
    printRange(ranges);
    infile.close();

    return 0;
}