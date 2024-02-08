#include <iostream>
using namespace std;

int main() {
    int startRange, endRange;
    cin >> startRange >> endRange;
    for (int number = startRange; number <= endRange; number++) {
        if (number % 6 == 0) {
            cout << "ab";
        } 
        else if (number % 2 == 0 && number % 3 != 0) {
            cout << "a";
        } 
        else if (number % 3 == 0 && number % 2 != 0) {
            cout << "b";
        }
    }
}