#include <iostream>
#include <string>
using namespace std;

string encodeWithRot13AndRot5(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            char c = (text[i] + 13 - 'A') % 26 + 'A';
            if (c < 'A') c += 26;
            result += c;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            char c = (text[i] + 13 - 'a') % 26 + 'a';
            if (c < 'a') c += 26;
            result += c;
        } else if (text[i] >= '0' && text[i] <= '9') {
            char c = (text[i] + 5 - '0') % 10 + '0';
            if (c < '0') c += 10;
            result += c;
        }
        else
            result += text[i];
    }
    return result;
}

int main()
{
    string inputText;
    while (getline(cin, inputText))
        cout << encodeWithRot13AndRot5(inputText) << endl;
}