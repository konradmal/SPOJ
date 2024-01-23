#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    vector<int> numbers;
    while (cin >> number) {
        numbers.push_back(number);
    }
    if (!numbers.empty()) {
        for (int i = numbers.size() - 1; i >= 0; i--) {
            cout << numbers[i] << " ";
        }
    }
}