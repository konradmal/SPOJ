#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    int limit = sqrt(number);
    for (int i = 3; i <= limit; i += 2) {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int testCount, num;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        cin >> num;
        if (isPrime(num))
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}