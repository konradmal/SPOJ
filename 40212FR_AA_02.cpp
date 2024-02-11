#include <iostream>
using namespace std;

int main() {
    int favoriteNumber, birthYear;
    cin >> favoriteNumber >> birthYear;
    int lastDigit = favoriteNumber % 10;
    int calculation = lastDigit * 2;
    calculation = (calculation + 5) * 50 + 1771;
    calculation -= birthYear;
    cout << calculation % 100;
}