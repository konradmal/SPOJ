#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main() {
    int testCases, numberA, numberB;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> numberA >> numberB;
        cout << 2 * gcd(numberA, numberB) << endl;
    }
}