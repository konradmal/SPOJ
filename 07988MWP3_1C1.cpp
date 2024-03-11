#include <iostream>
#include <cmath>
using namespace std;

int gcd(int length, int width) {
    while (width != 0) {
        int remainder = length % width;
        length = width;
        width = remainder;
    }
    return length;
}

int findLargestFactor(int number) {
    for (int divisor = 2; divisor <= sqrt(number); divisor++) {
        if (number % divisor == 0) {
            return number / divisor;
        }
    }
    return 1;
}

int main() {
    int testCaseCount;
    cin >> testCaseCount;
    for (int i = 0; i < testCaseCount; i++) {
        int plotLength, plotWidth;
        cin >> plotLength >> plotWidth;
        int gcdResult = gcd(plotLength, plotWidth);
        if (gcdResult == plotLength) {
            int largestDivisor = findLargestFactor(plotLength);
            cout << largestDivisor << endl;
        } else {
            cout << gcdResult << endl;
        }
    }
    return 0;
}