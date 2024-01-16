#include <iostream>
using namespace std;

int main() {
    int testCount, elementCount, sum, number;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        cin >> elementCount;
        sum = 0;
        for (int j = 0; j < elementCount; j++) {
            cin >> number;
            sum += number;
        }
        cout << sum << endl;
    }
    return 0;
}