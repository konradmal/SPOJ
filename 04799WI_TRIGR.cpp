#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (i + 2 < line.length() && line[i] == '?' && line[i + 1] == '?') {
                switch (line[i + 2]) {
                    case '=': cout << '#'; i += 2; break;
                    case '/': cout << '\\'; i += 2; break;
                    case '\'': cout << '^'; i += 2; break;
                    case '(': cout << '['; i += 2; break;
                    case ')': cout << ']'; i += 2; break;
                    case '!': cout << '|'; i += 2; break;
                    case '<': cout << '{'; i += 2; break;
                    case '>': cout << '}'; i += 2; break;
                    case '-': cout << '~'; i += 2; break;
                    default: cout << line[i]; break;
                }
            } else {
                cout << line[i];
            }
        }
        cout << endl;
    }
}