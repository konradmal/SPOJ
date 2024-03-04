#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int testCaseCount, number;
    cin >> testCaseCount;
    for(int i = 0; i < testCaseCount; i++) {
        cin >> number;
        if (number > 0 && pow((int)sqrt(number), 2) == number)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}