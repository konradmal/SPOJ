#include <iostream>
using namespace std;

int main() {
    int testCount, dayNumber;
    cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        cin >> dayNumber;
        int coordinatorIndex = (dayNumber - 1) / 7 % 6;
        if (coordinatorIndex == 0)
            cout << "DAWID" << endl;
        else if (coordinatorIndex == 1)
            cout << "GRZESIEK" << endl;
        else if (coordinatorIndex == 2)
            cout << "MACIEK" << endl;
        else if (coordinatorIndex == 3)
            cout << "MARCIN" << endl;
        else if (coordinatorIndex == 4)
            cout << "MARIUSZ" << endl;
        else
            cout << "RAFAL" << endl;
    }
}