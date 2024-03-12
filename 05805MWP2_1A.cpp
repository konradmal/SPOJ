#include <iostream>
#include <vector>
using namespace std;

int findMinimumRotationIndex(vector<int> clockFace) {
    int n = clockFace.size();
    int minRotationIndex = 0;
    int maxCorrect = 0;
    int correctCount;
    for (int rotation = 0; rotation < n; ++rotation) {
        correctCount = 0;
        for (int i = 0; i < n; ++i) {
            if (clockFace[(i + rotation) % n] == (i + 1)) {
                correctCount++;
            }
        }
        if (correctCount > maxCorrect) {
            maxCorrect = correctCount;
            minRotationIndex = rotation;
        }
    }
    return minRotationIndex;
}

void printClockFace(vector<int> clockFace, int rotation) {
    int n = clockFace.size();
    for (int i = 0; i < n; ++i) {
        cout << clockFace[(i + rotation) % n] << " ";
    }
    cout << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int clockSize;
        cin >> clockSize;
        vector<int> clockFace(clockSize);
        for (int& number : clockFace) {
            cin >> number;
        }
        int minRotationIndex = findMinimumRotationIndex(clockFace);
        printClockFace(clockFace, minRotationIndex);
    }
}