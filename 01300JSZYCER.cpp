#include <iostream>
#include <string>
using namespace std;

string CaesarCipher(string text, int key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            char encryptedChar = (text[i] + key - 65) % 26 + 65;
            if (encryptedChar < 65)
                encryptedChar += 26;
            result += encryptedChar;
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    string s;
    while (getline(cin, s)) {
        cout << CaesarCipher(s, 3) << endl;
    }
}