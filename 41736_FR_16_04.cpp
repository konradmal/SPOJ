#include <iostream>
using namespace std;

int main() {
    int eggCount;
    cin >> eggCount;
    if (eggCount < 1000)
    {
        double discountRate = (10 - eggCount / 100) / 10.;
        cout << (1 - discountRate) * 0.5 * eggCount;
    }
    else
        cout << eggCount - 500;
}