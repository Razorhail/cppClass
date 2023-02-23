//
// Created by Steve Kenny on 2/16/23.
//
#include <iostream>
#include <string>

using namespace std;

void sanitize(string &input) {


    for (int i = 0; i < input.length(); i++) {
//        cout << input[i];
        if (input.at(i) != '-')
            input.replace(i, 1, 1, '*');
    }
}

int main(){


    string fname, lName, ssn, uID, passwd;
    string output;

    cout << "Enter name, ssn, user ID, and password on one line: "; cin >> fname >> lName >> ssn >> uID >> passwd;

    sanitize(ssn);
    sanitize(passwd);

    cout << fname << " " << lName << endl;
    cout << ssn << endl;
    cout << uID << endl;
    cout << passwd << endl;

}