#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int currentDepth = 0, maxDepth = 0, linesCount;
    string instruction;
    cin >> linesCount;

    for (int i = 0; i < linesCount; i++) {
        cin >> instruction;
        if (instruction == "for") {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        } else if (instruction == "end")
            currentDepth--;
    }
    if (maxDepth == 0)
        cout << "O(1)";
    else if (maxDepth == 1)
        cout << "O(n)";
    else
        cout << "O(n^" << maxDepth << ")";
}