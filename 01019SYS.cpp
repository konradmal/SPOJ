#include <iostream>
using namespace std;

string ConvertToBase(int number, int base) {
    string result = "";
    while (number > 0) {
        int remainder = number % base;
        if (remainder <= 9) {
            result = char(remainder + '0') + result;
        }
        else {
            result = char(remainder - 10 + 'A') + result;
        }
        number /= base;
    }
    return result == "" ? "0" : result;
}

int main() {
    int testCases, number;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> number;
        cout << ConvertToBase(number, 16) << " " << ConvertToBase(number, 11) << endl;
    }
}