#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int testCases, arraySize, value, maxValue, maxValueCount;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> arraySize;
        int* array = new int[arraySize];
        maxValue = -1;
        maxValueCount = 1;
        for (int j = 0; j < arraySize; j++) {
            cin >> value;
            array[j] = value;
            if (value > maxValue) {
                maxValue = value;
                maxValueCount = 1;
            }
            else if (value == maxValue) {
                maxValueCount++;
            }
        }
        sort(array, array + arraySize);
        for (int j = 0; j < maxValueCount; j++) {
            cout << maxValue << " ";
        }
        for (int j = 0; j < arraySize - maxValueCount; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
        delete[] array;
    }
}