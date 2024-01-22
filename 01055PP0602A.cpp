#include <iostream>
using namespace std;

int main() {
    int testCases, arraySize, value;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> arraySize;
        int* array = new int[arraySize];
        for (int j = 0; j < arraySize / 2; j++) {
            cin >> value;
            array[j + arraySize / 2] = value;
            cin >> value;
            array[j] = value;
        }
        if (arraySize % 2 == 1) {
            cin >> value;
            array[arraySize - 1] = value;
        }

        for (int j = 0; j < arraySize; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
        delete[] array;
    }
}