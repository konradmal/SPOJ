#include <iostream>
using namespace std;

int main() {
    double coeffA, coeffB, coeffC, discriminant;
    while (cin >> coeffA >> coeffB >> coeffC) {
        discriminant = coeffB * coeffB - 4 * coeffA * coeffC;
        if (discriminant > 0)
            cout << 2 << endl;
        else if (discriminant < 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}