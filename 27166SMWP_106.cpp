#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectGraph(int edges) {
    double V = (1 + sqrt(1 + 8 * edges)) / 2;
    return int(V) == V;
}

int main() {
    int testsCount, connections;
    cin >> testsCount;
    for (int i = 0; i < testsCount; i++) {
        cin >> connections;
        if (isPerfectGraph(connections)) {
            cout << "TAK" << endl;
        } else {
            cout << "NIE" << endl;
        }
    }
}