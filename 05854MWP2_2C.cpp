#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    double centerX1, centerY1, radius1, centerX2, centerY2, radius2, centerDistance;
    for (int i = 0; i < testCases; i++) {
        cin >> centerX1 >> centerY1 >> radius1 >> centerX2 >> centerY2 >> radius2;
        centerDistance = sqrt((centerX1 - centerX2) * (centerX1 - centerX2) + (centerY1 - centerY2) * (centerY1 - centerY2));
        if (centerDistance + min(radius1, radius2) <= max(radius1, radius2)) {
            cout << fixed << setprecision(2) << 2 * min(radius1, radius2) << endl;
        } else if (centerDistance >= radius1 + radius2) {
            cout << "0.00" << endl;
        } else {
            double overlap = (radius1 + radius2) - centerDistance;
            cout << fixed << setprecision(2) << overlap << endl;
        }
    }
}