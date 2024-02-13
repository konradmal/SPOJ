#include <iostream>
#include <string>
using namespace std;

int main() {
    int balance = 0;
    string grades;
    cin >> grades;
    for (char grade : grades) {
        if (grade == '+')
            balance++;
        else
            balance--;
    }
    int netBalance = balance / 3;
    if (netBalance > 0)
        for (int i = 0; i < netBalance; i++)
            cout << 5 << " ";
    else if (netBalance < 0)
        for (int i = netBalance; i < 0; i++)
            cout << 1 << " ";
    else
        cout << "BRAK";
}