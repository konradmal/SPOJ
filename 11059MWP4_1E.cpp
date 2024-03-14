#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases, sequenceLength, element;
    cin >> testCases;
    int totalSum, prefixSum, suffixSum;
    bool found;
    for (int i = 0; i < testCases; i++) {
        cin >> sequenceLength;
        vector<int> sequenceElements;
        totalSum = 0, prefixSum = 0, suffixSum = 0;
        for (int j = 0; j < sequenceLength; j++) {
            cin >> element;
            sequenceElements.push_back(element);
            totalSum += element;
        }
        suffixSum = totalSum;
        found = false;
        for (int j = 0; j < sequenceLength - 1; j++) {
            prefixSum += sequenceElements[j];
            suffixSum -= sequenceElements[j];
            if (prefixSum == suffixSum) {
                cout << j + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << 0 << endl;
    }
}