#include <iostream>
using namespace std;

int main() {
    int length;
    string word;
    cin >> length;
    cin >> word;
    for (int layer = length / 2; layer >= 0; layer--) {
        for (int dotLeft = 0; dotLeft < layer; dotLeft++)
            cout << ".";
        for (int letterIndex = layer; letterIndex < length - layer; letterIndex++)
            cout << word[letterIndex];
        for (int dotRight = 0; dotRight < layer; dotRight++)
            cout << ".";
        cout << endl;
    }
}