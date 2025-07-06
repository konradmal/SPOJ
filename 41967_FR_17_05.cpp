#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    if (input[0] == '0' || input[0] == '1') {
        string magnetic = "DDDD";
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '0') {
                magnetic += magnetic[magnetic.length()-1];
            } else {
                if (magnetic.back() == 'D')
                    magnetic += 'G';
                else
                    magnetic += 'D';
            }
        }
        cout << magnetic;
    }
    else {
        string bits;
        for (int i = 1; i < input.length(); i++) {
            if (input[i] == input[i - 1])
                bits += '0';
            else
                bits += '1';
        }
        cout << bits.substr(3);
    }
}