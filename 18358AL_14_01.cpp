#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double letterFrequencies[26] = {};
    double totalLetters = 0;
    string word;
    while (cin >> word) {
        for (char letter : word) {
            letterFrequencies[(letter) - 'A']++;
            totalLetters++;
        }
    }
    for (int i = 0; i < 26; i++) {
        float percentage = round((letterFrequencies[i] / totalLetters) * 100);
        cout << char(i + 'A');
        for (int j = 0; j < percentage; j++)
            cout << "*";
        cout << endl;
    }
}