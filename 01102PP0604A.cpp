#include <iostream>
#include <vector>
#include <cfloat>
#include <cmath>
using namespace std;

int main() {
    int testCases, numberOfValues, value, closestValue;
    double average, minDifference;
    vector<int> values;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> numberOfValues;
        average = 0;
        minDifference = DBL_MAX;
        values.clear();
        for (int j = 0; j < numberOfValues; j++) {
            cin >> value;
            values.push_back(value);
            average += value;
        }
        average /= values.size();
        for (int j = 0; j < numberOfValues; j++) {
            double currentDifference = abs(values[j] - average);
            if (currentDifference < minDifference) {
                minDifference = currentDifference;
                closestValue = values[j];
            }
        }
        cout << closestValue << endl;
    }
}