#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    string password;
    bool hasUpper, hasLower, hasDigit, hasSpecial;
    for (int i = 0; i < testCases; i++) {
        getline(cin, password);
        hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
        if (password.length() >= 8) {
            for (char ch : password) {
                if (isupper(ch)) 
                    hasUpper = true;
                else if (islower(ch)) 
                    hasLower = true;
                else if (isdigit(ch)) 
                    hasDigit = true;
                else hasSpecial = true;
            }
            if (hasUpper && hasLower && hasDigit && hasSpecial)
                cout << password << endl;
        }
    }
}