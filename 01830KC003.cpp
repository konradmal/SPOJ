#include <iostream>
using namespace std;

int main() {
    double sideA, sideB, sideC;
    while (cin >> sideA >> sideB >> sideC) {
        if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}