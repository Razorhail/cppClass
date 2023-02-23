//
// Created by Steve Kenny on 2/16/23.
//
#include <iostream>
#include <string>

using namespace std;

// Just re-use functions we've already made

bool isVowel(char c){
    c = tolower(c);
    string vowels = "aeiou";

    for (char l : vowels) {
        if (c == l)
            return true;
    }

    return false;

}

// Pass by reference to clean up - doesn't specify we need to keep original

void removeVowel(string &input) {
    int pos = 0;

//    /*for (pos; pos <= input.length(); pos++) {
//    if (isVowel(pos))
//        input.erase(pos);
//    }*/

    for (char &ch : input)
        if (isVowel(ch)) // Combining erase with remove to iterate through input and remove chars
            input.erase(remove(input.begin(), input.end(), ch), input.end());
}

int main(){

    string input;
    string output;

    cout << "Enter a string: "; cin >> input;
    removeVowel(input);
    cout << input << endl;

    return 0;

}