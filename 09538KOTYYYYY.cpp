#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    int ageCat1, posCat1, ageCat2, posCat2;
    for (int i = 0; i < testCases; i++) {
        cin >> ageCat1 >> posCat1 >> ageCat2 >> posCat2;
        if (ageCat1 > ageCat2)
            if (int(abs(posCat2 - posCat1) + 1) % 3 == 2)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        else
            if (int(abs(posCat2 - posCat1) + 1) % 3 == 2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
    }
}