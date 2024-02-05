#include <iostream>
using namespace std;

int main() {
    int totalNumbers;
    cin >> totalNumbers;
    if (totalNumbers == 0)
        cout << 0;
    if (totalNumbers <= 2)
        cout << "NIE";
    else {
        for (int odd = 1; odd <= totalNumbers; odd += 2)
            cout << odd << " ";
        for (int even = 0; even <= totalNumbers; even += 2)
            cout << even << " ";
    }
}