#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        string text;
        cin >> text;
        int count = 1;
        for (int j = 1; j <= text.length(); j++) {
            if (j < text.length() && text[j] == text[j - 1]) {
                count++;
            } else {
                if (count > 2) {
                    cout << text[j - 1] << count;
                } else if (count == 2) {
                    cout << text[j - 1] << text[j - 1];
                } else {
                    cout << text[j - 1];
                }
                count = 1;
            }
        }
        cout << endl;
    }
}