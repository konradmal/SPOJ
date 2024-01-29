#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int lowerCaseCount[26] = { 0 };
    int upperCaseCount[26] = { 0 };
    string text;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, text);
        for (char ch : text) {
            if (ch >= 'a' && ch <= 'z')
                lowerCaseCount[ch - 'a']++;
            else if (ch >= 'A' && ch <= 'Z')
                upperCaseCount[ch - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (lowerCaseCount[i] > 0)
            cout << char(i + 'a') << " " << lowerCaseCount[i] << endl;
    }
    for (int i = 0; i < 26; i++) {
        if (upperCaseCount[i] > 0)
            cout << char(i + 'A') << " " << upperCaseCount[i] << endl;
    }
}