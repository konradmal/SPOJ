#include <iostream>
using namespace std;

int main() {
    int testCount;
    string fullPassword, partialPassword;
    cin >> testCount;
    bool match;
    for (int i = 0; i < testCount; i++) {
        match = true;
        cin >> fullPassword >> partialPassword;
        if (fullPassword.length() != partialPassword.length()) {
            cout << "error" << endl;
            continue;
        }
        for (int j = 0; j < fullPassword.length(); j++)
            if (!(fullPassword[j] == '*' || partialPassword[j] == '*' || fullPassword[j] == partialPassword[j])) {
                cout << "error" << endl;
                match = false;
                break;
            }
        if (match)
            cout << "ok" << endl;
    }
}