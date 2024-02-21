#include <iostream>
using namespace std;

int findZeros(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int testCases, number;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> number;
        cout << findZeros(number) << endl;
    }
}
