#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int testCount;
    cin >> testCount;
    float floatValue;
    for (int i = 0; i < testCount; i++) {
        cin >> floatValue;
        for (int byteIndex = 3; byteIndex >= 0; byteIndex--)
            cout << hex << (int)(((const unsigned char*)&floatValue)[byteIndex]) << " ";
        cout << endl;
    }
}