#include <iostream>
using namespace std;

int main() {
    int maciekTemp, desiredAvg;
    cin >> maciekTemp >> desiredAvg;
    int grzesiekTemp = 2 * desiredAvg - maciekTemp;
    if (grzesiekTemp >= 15 && grzesiekTemp <= 30)
        cout << grzesiekTemp;
    else
        cout << "NIE DA SIE";
}