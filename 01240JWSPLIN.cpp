#include <iostream>
using namespace std;

int main() {
    int testCases, x1, y1, x2, y2, x3, y3;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if ((x2 - x1) * (y3 - y2) == (x3 - x2) * (y2 - y1)) {
            cout << "TAK" << endl;
        } else {
            cout << "NIE" << endl;
        }
    }
}