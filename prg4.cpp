//4. Write a C++ program to illustrate function overloading in adding the distance between objects.

#include <iostream>
using namespace std;

void addDistance(int feet1, int inches1, int feet2, int inches2, int &resultFeet, int &resultInches) {
    resultInches = inches1 + inches2;
    resultFeet = feet1 + feet2 + (resultInches / 12);
    resultInches %= 12;
}

void addDistance(int feet1, int feet2, int &resultFeet) {
    resultFeet = feet1 + feet2;
}

int main() {
    int feet1 = 3, inches1 = 9; // Distance 1: 3 feet 9 inches
    int feet2 = 5, inches2 = 4; // Distance 2: 5 feet 4 inches
    int resultFeet, resultInches;

    addDistance(feet1, inches1, feet2, inches2, resultFeet, resultInches);
    cout << "After adding Distance 1 and Distance 2 (feet and inches): " 
    << resultFeet << " feet " << resultInches << " inches" << endl;

    addDistance(feet1, feet2, resultFeet);
    cout << "After adding Distance 1 and Distance 2 (only feet): " 
         << resultFeet << " feet" << endl;

    return 0;
}
