#include <iostream>
using namespace std;

int main() {
    int bajtekLegs = 0, bajtekHeads = 0;
    int frajtekLegs = 0, frajtekHeads = 0;
    int animals;
    cin >> animals;
    bajtekLegs += 2 * animals;
    bajtekHeads += animals;
    cin >> animals;
    bajtekLegs += 4 * animals;
    bajtekHeads += animals;
    cin >> animals;
    frajtekLegs += 2 * animals;
    frajtekHeads += animals;
    cin >> animals;
    frajtekLegs += 4 * animals;
    frajtekHeads += animals;
    if ((bajtekLegs > frajtekLegs) || ((bajtekLegs == frajtekLegs && bajtekHeads > frajtekHeads)))
        cout << "Bajtek";
    else if ((bajtekLegs < frajtekLegs) || ((bajtekLegs == frajtekLegs && bajtekHeads < frajtekHeads)))
        cout << "Frajtek";
    else
        cout << "remis";
}