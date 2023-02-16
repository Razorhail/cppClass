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

    string entry;
    int vowelCount = 0;

    cout << "Enter a string and I'll count the vowels: "; getline(cin, entry);

    for (char ch : entry)
        if (isVowel(ch))
            vowelCount++;
    cout << "Your entry was: " << entry << endl;
    cout << "It contained " << vowelCount << " vowels." << endl;

}