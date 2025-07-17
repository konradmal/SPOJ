#include <iostream>
using namespace std;

int main() {
    int distanceLeft, distanceRight, dayOfYear;
    cin >> distanceLeft >> distanceRight >> dayOfYear;
    if (dayOfYear == 33)
        cout << "WRACAJ";
    else if (distanceLeft < distanceRight)
        cout << "W LEWO";
    else
        cout << "W PRAWO";
}