#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int boardLengths[4];
    for (int i = 0; i < 4; i++) {
        cin >> boardLengths[i];
    }
    sort(boardLengths, boardLengths + 4);
    cout << boardLengths[0] * boardLengths[2];
}