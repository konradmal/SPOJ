#include <iostream>
using namespace std;

int main() {
    int testCases, winsStas, lossesStas, winsWies, lossesWies, winsGrzes, lossesGrzes, totalWins, totalLosses;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        totalWins = 0, totalLosses = 0;
        cin >> winsStas >> lossesStas >> winsWies >> lossesWies >> winsGrzes >> lossesGrzes;
        totalWins += winsStas + winsWies + winsGrzes;
        totalLosses += lossesStas + lossesWies + lossesGrzes;
        cout << (totalWins + totalLosses) / 3 * 2 - totalWins << " " << (totalWins + totalLosses) / 3 * 2 - totalLosses << endl;
    }
}