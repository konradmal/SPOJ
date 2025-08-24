#include <iostream>
#include <string>
using namespace std;

int main() {
    string digits;
    cin >> digits;
    int firstZero = digits.find('0');
    int lastOne   = digits.rfind('1');
    if (lastOne <= firstZero + 1)
        cout << "PUSTY";
    else
        cout << digits.substr(firstZero + 1, lastOne - firstZero - 1);
}