#include <iostream>
using namespace std;

int main() {
    int testCases, numberOfDirections, direction, distance, northSouth = 0, eastWest = 0;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> numberOfDirections;
        northSouth = 0;
        eastWest = 0;
        for (int j = 0; j < numberOfDirections; j++) {
            cin >> direction >> distance;
            switch (direction) {
                case 0: northSouth += distance; break;
                case 1: northSouth -= distance; break;
                case 2: eastWest += distance; break;
                case 3: eastWest -= distance; break;
            }
        }
        if (northSouth == 0 && eastWest == 0)
            cout << "studnia" << endl;
        else {
            if (northSouth > 0) cout << "0 " << northSouth << endl;
            else if (northSouth < 0) cout << "1 " << -northSouth << endl;

            if (eastWest > 0) cout << "2 " << eastWest << endl;
            else if (eastWest < 0) cout << "3 " << -eastWest << endl;
        }
    }
}