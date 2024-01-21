#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int secondsInDay = 24 * 60 * 60;
    int testCases, numContestants, cookiesPerBox, eatingTime;
    int totalCookiesNeeded = 0;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> numContestants >> cookiesPerBox;
        for (int j = 0; j < numContestants; j++) {
            cin >> eatingTime;
            totalCookiesNeeded += secondsInDay / eatingTime;
        }
        double boxesNeeded = totalCookiesNeeded / static_cast<double>(cookiesPerBox);
        totalCookiesNeeded = 0;
        cout << ceil(boxesNeeded) << endl;
    }
}