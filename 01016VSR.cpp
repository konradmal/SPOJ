#include <iostream>
using namespace std;

int main() {
    int testCount;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        int speedAtoB, speedBtoA;
        cin >> speedAtoB >> speedBtoA;
        int averageSpeed = 2 * speedAtoB * speedBtoA / (speedAtoB + speedBtoA);
        cout << averageSpeed << endl;
    }
    return 0;
}