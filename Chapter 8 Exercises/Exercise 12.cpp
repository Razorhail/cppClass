//
// Created by Steve Kenny on 2/28/23.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int DAYS_PER_WEEK = 7;
const int PARTICIPANTS = 5;

void readFile(string names[], double miles[][DAYS_PER_WEEK]) {

    int countName = 0;
    int countMiles = 0;

    ifstream infile;
    infile.open("forEx12.txt"); // just hard code it...

    while (countName < PARTICIPANTS) {
        infile >> names[countName];
        while (countMiles < DAYS_PER_WEEK) {
        infile >> miles[countName][countMiles];
        countMiles++;
        }
    countMiles = 0;
    countName++;
    }

}

void calcMileage(double matrix[][2], double miles[][DAYS_PER_WEEK], int rowSize){

    int count = 0, num = 0;
    double total = 0, avg = 0;

    cout << fixed << showpoint << setprecision(2) << endl;

    while (count < rowSize){
        while (num < DAYS_PER_WEEK){
            total += miles[count][num];
            num++;
        }
        avg = (total/DAYS_PER_WEEK);
        matrix[count][0] = total;
        matrix[count][1] = avg;
        total = 0; // reset all this junk for the next go through
        avg = 0;
        num = 0;
        count++;
    }
}

void print(double matrix[][2], string names[], int nameLen){

    cout  << "Name\t"  << "Tot Miles\t" << "Average" << endl;

    int counter = 0;

    while (counter < nameLen){
        cout << names[counter] << "\t" << matrix[counter][0] << "\t\t" << matrix[counter][1] << endl;
        counter ++;
    }
}

int main(){

    string names[PARTICIPANTS];
    double miles[PARTICIPANTS][DAYS_PER_WEEK];
    double results[PARTICIPANTS][2];

    readFile(names, miles);
    calcMileage(results, miles, 5);
    print(results, names,5);

    return 0;

}