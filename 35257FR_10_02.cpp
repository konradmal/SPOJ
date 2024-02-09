#include <iostream>
#include <vector>
using namespace std;

int main() {
    int letterCount;
    cin >> letterCount;
    vector<char> doubledLetters(letterCount);
    string word, result;
    for (int i = 0; i < letterCount; i++) {
        cin >> doubledLetters[i];
    }
    cin >> word;
    for (char currentChar : word) {
        result += currentChar;
        for (char doubledChar : doubledLetters) {
            if (currentChar == doubledChar) {
                result += currentChar;
                break;
            }
        }
    }
    cout << result;
}