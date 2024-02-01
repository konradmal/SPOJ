#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char z;
    int value, numberToFind = -1, numberOfTests = -1, count = 0;
    while (cin.get(z)) {
        if (isdigit(z)) {
            cin.unget();
            cin >> value;
            if (numberToFind == -1)
                numberToFind = value;
            else if (numberOfTests == -1)
                numberOfTests = value;
            else if (value == numberToFind)
                count++;
        }
        else if (z == '\n') {
            cout << count << endl;
            numberToFind = -1;
            numberOfTests = -1;
            count = 0;
        }
    }
}