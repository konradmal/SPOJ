#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long reverseNumber(long long n) {
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

bool isPalindrome(string str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    int testCases;
    long long currentNumber;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int steps = 0;
        cin >> currentNumber;
        while (true) {
            string currentNumberStr = to_string(currentNumber);
            if (isPalindrome(currentNumberStr)) {
                cout << currentNumberStr << " " << steps << endl;
                break;
            }
            currentNumber += reverseNumber(currentNumber);
            steps++;
        }
    }
}