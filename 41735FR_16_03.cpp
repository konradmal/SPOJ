#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string snakeCaseVariable;
    cin >> snakeCaseVariable;
    for (int i = 0; i < snakeCaseVariable.length(); i++) {
        if (isalpha(snakeCaseVariable[i]))
            cout << snakeCaseVariable[i];
        else {
            i++;
            if (i < snakeCaseVariable.length()) {
                cout << char(toupper(snakeCaseVariable[i]));
            }
        }
    }
}