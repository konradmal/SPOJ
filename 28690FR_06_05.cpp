#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int testCases, numberOfPoints;
    cin >> testCases;
    double startX, startY, endX, endY, distance;
    for (int i = 0; i < testCases; i++) {
        cin >> numberOfPoints;
        distance = 0;
        cin >> startX >> startY;
        startX /= 1000;
        startY /= 1000;
        for (int j = 1; j < numberOfPoints; j++) {
            cin >> endX >> endY;
            endX /= 1000;
            endY /= 1000;
            distance += sqrt(pow(endX - startX, 2) + pow(endY - startY, 2));
            startX = endX;
            startY = endY;
        }
        cout << setprecision(2) << fixed << distance << endl;
    }
}