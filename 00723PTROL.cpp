#include <iostream>
using namespace std;

int main() {
    int testCases, arraySize, value, firstValue;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> arraySize;
        cin >> firstValue;
        for (int j = 0; j < arraySize - 1; j++) {
            cin >> value;
            cout << value << " ";
        }
        cout << firstValue << endl;
    }
}