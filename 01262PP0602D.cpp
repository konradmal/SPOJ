#include <iostream>
using namespace std;

int main() {
    int arraySize, shift;
    cin >> arraySize >> shift;
    int* array = new int[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }
    for (int i = shift; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    for (int i = 0; i < shift; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
}
