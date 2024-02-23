#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isTriangle(double side1, double side2, double side3) {
    return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
}

double triangleArea(double side1, double side2, double side3) {
    double semiPerimeter = (side1 + side2 + side3) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
}

int main() {
    int testCases, participants;
    cin >> testCases;
    double sideA, sideB, sideC, chalkRate, totalChalkUsed;
    for (int i = 0; i < testCases; i++) {
        totalChalkUsed = 0;
        cin >> participants >> chalkRate;
        for (int j = 0; j < participants; j++) {
            cin >> sideA >> sideB >> sideC;
            if (isTriangle(sideA, sideB, sideC)) {
                totalChalkUsed += triangleArea(sideA * 0.01, sideB * 0.01, sideC * 0.01) * chalkRate;
            }
        }
        cout << fixed << setprecision(0) << totalChalkUsed * 1000 << endl;
    }
}