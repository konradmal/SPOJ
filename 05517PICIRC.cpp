#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double centerX, centerY, radius, pointX, pointY, distance;
    cin >> centerX >> centerY >> radius;
    int numberOfPoints;
    cin >> numberOfPoints;
    for (int i = 0; i < numberOfPoints; i++) {
        cin >> pointX >> pointY;
        distance = sqrt((centerX - pointX) * (centerX - pointX) + (centerY - pointY) * (centerY - pointY));
        if (distance < radius)
            cout << "I" << endl;
        else if (distance == radius)
            cout << "E" << endl;
        else
            cout << "O" << endl;
    }
}