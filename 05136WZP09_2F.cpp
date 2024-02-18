#include <iostream>
using namespace std;

int main() {
    string number;
    int digitSum;
    while (cin >> number && number != "0") {
        digitSum = 0;
        for (char digit : number)
            digitSum += digit - '0';
        if ((number.back() == '0' || number.back() == '5') && digitSum % 3 == 0)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
}