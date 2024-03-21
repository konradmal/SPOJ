#include <iostream>
using namespace std;

int main() {
    int testCount, codeLength, unknownCount;
    cin >> testCount;
    string code;
    for (int i = 0; i < testCount; i++) {
        cin >> codeLength >> code;
        unknownCount = 0;
        if (codeLength == 1 && code[0] == '?') {
            cout << 10 << endl;
            continue;
        }
        if (codeLength == 1 && code[0] != '?') {
            cout << 1 << endl;
            continue;
        }
        cout << (code[0] == '?' ? 9 : 1);
        for (int j = 1; j < code.length(); j++) {
            if (code[j] == '?') {
                unknownCount++;
            }
        }
        for (int j = 0; j < unknownCount; j++) {
            cout << 0;
        }
        cout << endl;
    }
}