#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, zeros = 0;
    cin >> number;
    bool hasEvenDigit = false;
    if (number == 0)
        cout << "Tak" << endl;
    else {
        while (number > 0) {
            digit = number % 10;
            if (digit % 2 == 0) {
                cout << "Tak" << endl;
                hasEvenDigit = true;
                break;
            }
            number /= 10;
        }
        if (!hasEvenDigit)
            cout << "Nie" << endl;
    }
}