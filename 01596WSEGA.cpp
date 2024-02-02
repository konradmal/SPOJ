#include <iostream>
using namespace std;

int main() {
    int testCases, segments, legs, totalLegs;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        totalLegs = 0;
        cin >> segments;
        for (int j = 0; j < segments; j++) {
            cin >> legs;
            totalLegs += legs;
        }
        cout << totalLegs + segments - 1 << endl;
    }
}