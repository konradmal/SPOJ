#include <iostream>
using namespace std;

int main() {
    int testCases, value, stepsCount;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        stepsCount = 0;
        cin >> value;
        while (value != 1) {
            if (value % 2 == 0)
                value /= 2;
            else
                value = 3 * value + 1;
            stepsCount++;
        }
        cout << stepsCount << endl;
    }
}