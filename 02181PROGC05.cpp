#include <iostream>
using namespace std;

int main() {
    char excludedChar;
    string inputString;
    while (cin >> excludedChar) {
        cin >> inputString;
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString[i] != excludedChar)
                cout << inputString[i];
        }
        cout << endl;
    }
}