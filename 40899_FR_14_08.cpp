#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inputNumber, square;
    cin >> inputNumber;
    square = sqrt(inputNumber);
    square = square * square;
    if (inputNumber == square)
        cout << "TAK";
    else
        cout << "NIE";
}