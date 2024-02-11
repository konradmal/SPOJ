#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCases;
    long long number;
    int base;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> number >> base;
        if (number == 0)
            cout << 1 << endl;
        else
            cout << static_cast<int>(floor(log(number) / log(base)) + 1) << endl;
    }
}