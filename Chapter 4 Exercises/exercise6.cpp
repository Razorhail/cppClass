//
// Created by Steve Kenny on 1/25/23.
//
#include <iostream>

using namespace std;

int main(){

    const int COOKIES_PER_BOX_MAX = 24;
    const int BOXES_PER_CONTAINER_MAX = 75;

    int totalCookies = 0;
    int cookiesInBox = 0;
    int boxesInContainer = 0;
    int totalBoxes = 0;
    int totalContainers = 0;
    int extraCookies = 0;
    int extraBoxes = 0;

    cout << "Enter total number of cookies: "; cin >> totalCookies;
    cout << "Enter number of cookies in a box: "; cin >> cookiesInBox;

    // make sure there are actually cookies in the box and no more than 24
    // otherwise you get the same result everytime...
    if ((cookiesInBox < 1) || (cookiesInBox > COOKIES_PER_BOX_MAX)){
        cookiesInBox = COOKIES_PER_BOX_MAX; // if outside range set it to 24
    }

    cout << "Enter number of boxes in container: "; cin >> boxesInContainer;

    // same goes for the containers
    if ((boxesInContainer < 1) || (boxesInContainer > BOXES_PER_CONTAINER_MAX)){
        boxesInContainer = BOXES_PER_CONTAINER_MAX;
    }

    //
    totalBoxes = totalCookies / cookiesInBox;
    extraCookies = totalCookies % cookiesInBox; // modulus to get remaining cookies
    totalContainers = totalBoxes / boxesInContainer;
    extraBoxes = totalBoxes % boxesInContainer; // modulus again for remainders

    cout << "Number of boxes: " << totalBoxes << endl;
    cout << "Number of containers: " << totalContainers << endl;
    cout << "Extra cookies: " << extraCookies << endl;
    cout << "Extra boxes: " << extraBoxes << endl;

    return 0;
}