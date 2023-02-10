//
// Created by Steve Kenny on 2/7/23.
//
#include <iostream>
#include <string>

using namespace std;

int main(){

    string tNumber;
    int count = 0;
    int index = 0;
//    const string ABC[][] = {{'a','A','b','B','c','C'},
//                       {'d','D','e','E','f','F'},
//                       {'g','G','h','H','i','I'},
//                       {'j','J','k','K','l','L'},         // Wanted to try an array, but it's
//                       {'m','M','n','N','o','O'},         // Not working the way I thought it would
//                       {'p','P','q','Q','r','R','s','S'},
//                       {'t','T','u','U','v','V'},
//                       {'w','W','x','X','y','Y','z','Z'}};

    do{
    cout << "Enter phone number letters or EXIT to exit: ";
        getline(cin, tNumber);
    while (index <= tNumber.length()) {
        switch (tNumber[index]) {
            case 'a': // Initially I was going to try looping the array but couldn't get it working.
            case 'b': // Then I discovered something called "switch fall-through"
            case 'c': // I'm pretty sure it's usually looked at as an error or improper but in this instance
            case 'A': // we can use it to catch the character we want and even if the case
            case 'B': // doesn't have a statement in it, our program will "fall-through"
            case 'C': // the cases until it hits a case that has one.
                cout << 2;
                count++;
                break;
            case 'd': // E.g. the loop hits the character 'e'
            case 'e': // This case matches 'e' but has no statements in it
            case 'f': // The program "falls" through the cases until it reaches
            case 'D':
            case 'E':
            case 'F': // HERE - and executes the statements
                cout << 3; // Here
                count++;
                break;
            case 'g':
            case 'h':
            case 'i':
            case 'G':
            case 'H':
            case 'I':
                cout << 4;
                count++;
                break;
            case 'j':
            case 'k':
            case 'l':
            case 'J':
            case 'K':
            case 'L':
                cout << 5;
                count++;
                break;
            case 'm':
            case 'n':
            case 'o':
            case 'M':
            case 'N':
            case 'O':
                cout << 6;
                count++;
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                cout << 7;
                count++;
                break;
            case 't':
            case 'u':
            case 'v':
            case 'T':
            case 'U':
            case 'V':
                cout << 8;
                count++;
                break;
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << 9;
                count++;
                break;
            case ' ':
                break;

        }
        if (count == 3)
            cout << "-";

        if (count == 7) {
            break;
        }

        index++;
    }
    cout << endl;
    count = 0;
    index = 0;

} while (tNumber != "EXIT");

    return 0;
}