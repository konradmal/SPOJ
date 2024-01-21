#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfTests;
    cin >> numberOfTests;
    string text;
    for (int i = 0; i < numberOfTests; i++) {
        cin >> text;
        cout << text.substr(0, text.length() / 2) << endl;
    }
}