#include <iostream>
using namespace std;

int main() {
    int syllableCount;
    cin >> syllableCount;
    string currentSyllable, previousSyllable;
    cin >> currentSyllable;
    for (int i = 0; i < syllableCount - 1; i++)
    {
        previousSyllable = currentSyllable;
        cin >> currentSyllable;
        if (currentSyllable == "ma" && previousSyllable == "ma")
        {
            cout << "mama";
            break;
        }
        else if (currentSyllable == "ta" && previousSyllable == "ta")
        {
            cout << "tata";
            break;
        }
    }
}