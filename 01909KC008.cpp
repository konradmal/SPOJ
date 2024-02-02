#include <iostream>
using namespace std;

int main() {
    long int number, partialSum = 0, totalSum = 0;
    while (cin >> number) {
        if (number == 0) {
            cout << partialSum << endl;
            totalSum += partialSum;
            partialSum = 0;
        } else {
            partialSum += number;
        }
    }
    cout << totalSum << endl;
}
