#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCases, dividend, divisor, rest;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> dividend >> divisor;
        rest = dividend % divisor;
        if (rest < 0)
            rest += abs(divisor);
        cout << rest << endl;
    }
}