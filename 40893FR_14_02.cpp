#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    bool containsSto = false;
    for (int i = 2; i < word.length(); i++)
        if (word[i - 2] == 's' && word[i - 1] == 't' && word[i] == 'o') {
            cout << "TAK";
            containsSto = true;
            break;
        }
    if (!containsSto)
        cout << "NIE";
}