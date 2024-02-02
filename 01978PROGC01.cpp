#include <iostream>
#include <string>
using namespace std;

int main() {
    int lineCount = 0;
    string line;
    while (getline(cin, line))
        lineCount++;
    cout << lineCount << endl;
}