#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int wordsCount, numbersCount, index;
    string textLine;
    while (getline(cin, textLine)) {
        wordsCount = 0;
        numbersCount = 0;
        index = 0;
        while (index < textLine.length()) {
            if (isdigit(textLine[index]))
                numbersCount++;
            else
                wordsCount++;
            while (index < textLine.length() && textLine[index] != ' ')
                index++;
            index++;
        }
        cout << numbersCount << " " << wordsCount << endl;
    }
}