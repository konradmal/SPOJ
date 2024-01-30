#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inputLine, outputLine;
    while (getline(cin, inputLine)) {
        outputLine = "";
        bool insideTag = false;
        for (char ch : inputLine) {
            if (ch == '<') {
                insideTag = true;
            }
            if (insideTag) {
                outputLine += toupper(ch);
            } else {
                outputLine += ch;
            }
            if (ch == '>') {
                insideTag = false;
            }
        }
        cout << outputLine << endl;
    }
}