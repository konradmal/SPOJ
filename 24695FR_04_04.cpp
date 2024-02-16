#include <iostream>
using namespace std;

int main() {
    int testCases, charCount;
    cin >> testCases;
    string expression;
    char currentChar, previousChar, previousOutput;
    for (int i = 0; i < testCases; i++) {
        cin >> expression;
        charCount = 0;
        while (charCount < expression.length() && expression[charCount] == '|') {
            cout << "(";
            charCount++;
        }
        if (charCount == 0) {
            cout << expression[0];
            charCount++;
        }
        previousOutput = expression[charCount - 1];
        for (; charCount < expression.length(); charCount++) {
            currentChar = expression[charCount];
            previousChar = expression[charCount - 1];
            if (currentChar == '|' && (previousOutput == '(' || previousChar == '-' || previousChar == '+')) {
                cout << "(";
                previousOutput = '(';
            }
            else if (currentChar == '|' && !(previousOutput == '(' || previousChar == '-' || previousChar == '+')) {
                cout << ")";
                previousOutput = ')';
            } else {
                cout << currentChar;
                previousOutput = currentChar;
            }
        }
        cout << endl;
    }
}