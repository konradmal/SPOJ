#include <iostream>
using namespace std;

int factorial(int number) {
    int result = 1;
    for (; number > 0; number--) {
        result *= number;
    }
    return result;
}

int main() {
    int testCount, num, factorialResult, lastDigit, secondLastDigit;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        cin >> num;
        if (num < 10) {
            factorialResult = factorial(num);
            lastDigit = factorialResult % 10;
            factorialResult /= 10;
            secondLastDigit = factorialResult % 10;
            cout << secondLastDigit << " " << lastDigit << endl;
        }
        else {
            cout << 0 << " " << 0 << endl;
        }
    }
}