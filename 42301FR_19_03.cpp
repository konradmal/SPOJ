#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numberOfCups, numberOfSwaps, swapTemp, firstCupIndex, secondCupIndex;
    cin >> numberOfCups;
    vector<int> cupsIDs;
    for (int i = 1; i <= numberOfCups; i++)
        cupsIDs.push_back(i);
    cin >> numberOfSwaps;
    for (int i = 0; i < numberOfSwaps; i++) {
        cin >> firstCupIndex >> secondCupIndex;
        swapTemp = cupsIDs[firstCupIndex - 1];
        cupsIDs[firstCupIndex - 1] = cupsIDs[secondCupIndex - 1];
        cupsIDs[secondCupIndex - 1] = swapTemp;
    }
    for (int i = 0; i < numberOfCups; i++)
        cout << cupsIDs[i] << " ";
}