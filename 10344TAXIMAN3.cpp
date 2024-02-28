#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long dimensions, testCaseCount, coordinate, distanceSum;
    cin >> dimensions >> testCaseCount;
    for (int i = 0; i < testCaseCount; i++) {
        vector<long> startPoint;
        vector<long> endPoint;
        distanceSum = 0;
        for (int j = 0; j < dimensions; j++) {
            cin >> coordinate;
            startPoint.push_back(coordinate);
        }
        for (int j = 0; j < dimensions; j++) {
            cin >> coordinate;
            endPoint.push_back(coordinate);
        }
        for (int j = 0; j < dimensions; j++) {
            distanceSum += abs(startPoint[j] - endPoint[j]);
        }
        cout << distanceSum << endl;
    }
}