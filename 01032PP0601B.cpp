#include <iostream>
using namespace std;

int main() {
    int testCases, upperLimit, divisibleBy, notDivisibleBy;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> upperLimit >> divisibleBy >> notDivisibleBy;
        for (int number = divisibleBy; number < upperLimit; number += divisibleBy) {
            if (number % notDivisibleBy != 0) {
                cout << number << " ";
            }
        }
        cout << endl;
    }
}