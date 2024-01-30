#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inputLine, outputLine;
    bool capitalizeNext;
    while (getline(cin, inputLine)) {
        outputLine = "";
        for (int i = 0; i < inputLine.length(); i++) {
            capitalizeNext = false;
            while (isspace(inputLine[i])) {
                i++;
                capitalizeNext = true;
            }
            if (capitalizeNext) {
                outputLine += toupper(inputLine[i]);
            }
            else {
                outputLine += inputLine[i];
            }
        }
        cout << outputLine << endl;
    }
}