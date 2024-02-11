#include <iostream>
using namespace std;

int main() {
    const double KM_TO_MILES = 1.609344;
    double kilometers;
    cin >> kilometers;
    double miles = kilometers / KM_TO_MILES;
    if (miles < 300)
        cout << "NIE";
    else if (miles < 500)
        cout << "SPRAWDZIMY TWOJE OBECNE BUTY";
    else
        cout << "TAK";
}