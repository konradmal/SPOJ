#include <iostream>
using namespace std;

int main() {
    int testCases, base, exponent;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> base >> exponent;
        int lastDigitOfBase = base % 10;
        int exponentMod = 0;
        switch (lastDigitOfBase) {
            case 0: 
                cout << 0 << endl;
                continue;
            case 1: 
                cout << 1 << endl;
                continue;
            case 5: 
                cout << 5 << endl;
                continue;
            case 6: 
                cout << 6 << endl;
                continue;
            case 2: case 3: case 7: case 8:
                exponentMod = exponent % 4;
                if (exponentMod == 0) exponentMod = 4;
                break;
            case 4: case 9:
                exponentMod = exponent % 2;
                if (exponentMod == 0) exponentMod = 2;
                break;
        }
        int result = 1;
        for (int j = 0; j < exponentMod; j++) {
            result = (result * lastDigitOfBase) % 10;
        }
        cout << result << endl;
    }
}