#include <iostream>
using namespace std;

int main() {
    int currentNumber, previousNumber = 42, count42 = 0;
    while (cin >> currentNumber) {
        cout << currentNumber << endl;
        if (currentNumber == 42 && previousNumber != 42)
            count42++;
        previousNumber = currentNumber;
        if (count42 == 3)
            break;
    }
}