#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stack;
    char command;
    int number;
    while (cin >> command) {
        if (command == '+') {
            cin >> number;
            if (stack.size() == 10)
                cout << ":(" << endl;
            else {
                stack.push_back(number);
                cout << ":)" << endl;
            }
        }
        else {
            if (stack.size() > 0) {
                cout << stack[stack.size() - 1] << endl;
                stack.pop_back();
            }
            else
                cout << ":(" << endl;
        }
    }
}