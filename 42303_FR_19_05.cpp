#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int testCount, firstDigit, lastDigit;
    cin >> testCount;
    string inputString;
    for (int i = 0; i < testCount; i++)
    {
        firstDigit = -1, lastDigit = -1;
        cin >> inputString;
        for (int j = 0; j < inputString.length(); j++)
        {
            if (isdigit(inputString[j]))
            {
                if (firstDigit == -1)
                {
                    firstDigit = int(inputString[j]) - 48;
                }
                else
                {
                    lastDigit = int(inputString[j]) - 48;
                }
            }
        }
        if (firstDigit > -1 && lastDigit > -1)
            cout << firstDigit << " " << lastDigit << endl;
        else
            cout << "BRAK" << endl;
    }
}