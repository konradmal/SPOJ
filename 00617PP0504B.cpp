#include <iostream>
using namespace std;

int main() {
    int testCases, minLength;
    string string1, string2;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> string1 >> string2;
        minLength = min(string1.length(), string2.length());
        for (int j = 0; j < minLength; j++) {
            cout << string1[j] << string2[j];
        }
        cout << endl;
    }
}