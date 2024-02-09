#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sequenceLength, number, tripletsCount = 0;
    cin >> sequenceLength;
    vector<int> sequence;
    for (int i = 0; i < sequenceLength; i++) {
        cin >> number;
        sequence.push_back(number);
    }
    for (int i = 2; i < sequenceLength; i++) {
        if (sequence[i] == sequence[i - 1] + sequence[i - 2]) {
            tripletsCount++;
        }
    }
    cout << tripletsCount;
}