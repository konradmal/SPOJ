#include <iostream>
using namespace std;

int main() {
    int testCases, itemsCount, capacity, itemWeight;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> itemsCount >> capacity >> itemWeight;
        if (itemsCount * itemWeight <= capacity)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}