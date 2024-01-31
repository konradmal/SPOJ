#include <iostream>
using namespace std;

int main() {
    int testCases, classSize, candies;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> classSize >> candies;
        if (classSize == 0 || candies == 0)
            cout << "NIE" << endl;
        else if (classSize == 1)
            cout << "TAK" << endl;
        else if (candies % (classSize - 1) == 0)
            cout << "NIE" << endl;
        else
            cout << "TAK" << endl;
    }
}