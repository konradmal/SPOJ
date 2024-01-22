#include <iostream>
using namespace std;

int main() {
    int testCases, sum;
    cin >> testCases;
    string pesel;
    for (int i = 0; i < testCases; i++) {
        cin >> pesel;
        sum = (pesel[0] - '0') * 1 + (pesel[1] - '0') * 3 + (pesel[2] - '0') * 7 + 
                  (pesel[3] - '0') * 9 + (pesel[4] - '0') * 1 + (pesel[5] - '0') * 3 + 
                  (pesel[6] - '0') * 7 + (pesel[7] - '0') * 9 + (pesel[8] - '0') * 1 + 
                  (pesel[9] - '0') * 3 + (pesel[10] - '0') * 1;
        if (sum % 10 == 0)
            cout << "D" << endl;
        else
            cout << "N" << endl;
    }
}