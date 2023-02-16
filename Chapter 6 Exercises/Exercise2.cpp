//
// Created by Steve Kenny on 2/14/23.
//
#include <iostream>

using namespace std;

bool isVowel(char c){
    c = tolower(c);
    string vowels = "aeiou";

    for (char l : vowels) {
        if (c == l)
            return true;
    }

        return false;

}

int main(){
    char entry;

    cout << "Enter a character: "; cin >> entry;

    if(isVowel(entry))
        cout << "vowel";
}