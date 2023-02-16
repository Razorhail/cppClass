//
// Created by Steve Kenny on 2/14/23.
//
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str){

    int length = str.length(); // From book

    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - 1 - i])
            return false;

    return true;
}

int main(){

    int choice = 0;
    string chosen = "";
    string userDefined = "";
    bool exit = false;

    while (!exit) {
        cout << "Make a selection... \n"
                "[1] madam\n"
                "[2] abba\n"
                "[3] 22\n"
                "[4] 67876\n"
                "[5] 444244\n"
                "[6] trymeuemyrt\n"
                "[7] User Defined\n"
                "[Any Other Key] Exit\n"
                ": ";
        cin >> choice;
        switch (choice) {
            case 1:
                chosen = "madam";
                break;
            case 2:
                chosen = "abba";
                break;
            case 3:
                chosen = "22";
                break;
            case 4:
                chosen = "67876";
                break;
            case 5:
                chosen = "444244";
                break;
            case 6:
                chosen = "trymeuemyrt";
                break;
            case 7:
                cout << "Enter your own string: "; cin >> userDefined;
                break;
            default:
                exit = true;
        }

        for (char c : userDefined) // using C++11 range loop and pass by value to modify and put into chosen variable
            chosen += tolower(c); // Just force everything lowercase and add the char values to chosen

        if (isPalindrome(chosen)){
            cout << chosen << " is a palindrome\n" << endl;
         }else{
            cout << chosen << " is not a palindrome\n" << endl;
        }
    }

}