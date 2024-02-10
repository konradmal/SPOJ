#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    string expression;
    for (int i = 0; i < testCases; i++) {
        cin >> expression;
        int result = expression[0] - '0';
        for (size_t j = 1; j < expression.length(); j += 2) {
            char operation = expression[j];
            int nextDigit = expression[j + 1] - '0';
            if (operation == '+') {
                result += nextDigit;
            } else {
                result -= nextDigit;
            }
        }
        cout << result << endl;
    }
}