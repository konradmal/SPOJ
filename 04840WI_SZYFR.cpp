#include <iostream>
#include <string>
#include <vector>
using namespace std;

char shiftChar(char ch, int shift) {
    if (shift < 0)
        shift += 26;
    return (ch - 'A' + shift) % 26 + 'A';
}

int main() {
    int i = 0;
    string action, key, text, keyStr;
    cin >> action >> key >> text;
    while (key[i] == '0')
        i++;
    while (i < key.length()) {
        keyStr += key[i];
        i++;
    }
    vector<int> keyDigits;
    for (char ch : keyStr)
        keyDigits.push_back(ch - '0');
    for (int i = 0; i < text.length(); ++i) {
        int shift = keyDigits[i % keyDigits.size()];
        if (action == "DESZYFRUJ")
            shift = -shift;
        cout << shiftChar(text[i], shift);
    }
}