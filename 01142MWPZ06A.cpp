#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numberOfCases;
    double ageDifference, timesYounger, currentAge, calculationResult;
    cin >> numberOfCases;
    for (int i = 0; i < numberOfCases; i++) {
        cin >> ageDifference >> timesYounger >> currentAge;
        calculationResult = (timesYounger * currentAge - (ageDifference + timesYounger)) / (currentAge - 1);
        cout << round(calculationResult * 12) << endl;
    }
}