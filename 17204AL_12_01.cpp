#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int testCases, floors, currentPosition, lowestPosition, highestPosition;
    cin >> testCases;
    string sequence;
    for (int test = 0; test < testCases; ++test) {
        cin >> floors >> sequence;
        currentPosition = 0;
        lowestPosition = 0;
        highestPosition = 0;
        for (char move : sequence) {
            if (move == 'D') {
                currentPosition--;
                lowestPosition = min(lowestPosition, currentPosition);
            } else {
                currentPosition++;
                highestPosition = max(highestPosition, currentPosition);
            }
        }
        if (highestPosition - lowestPosition < floors)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}