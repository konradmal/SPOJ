#include <iostream>
using namespace std;

int main() {
    string inputString;
    int totalValue = 0;
    char currentCharacter;
    cin >> inputString;
    for (int i = 0; i < inputString.length(); i++) {
        currentCharacter = inputString[i];
        switch (currentCharacter) {
            case 'a': totalValue += 1; break;
            case 'b': totalValue += 2; break;
            case 'c': totalValue += 3; break;
            case 'd': totalValue += 4; break;
            case 'e': totalValue += 5; break;
            case 'f': totalValue += 6; break;
            case 'g': totalValue += 7; break;
            case 'h': totalValue += 8; break;
            case 'i': totalValue += 9; break;
            case 'k': totalValue += 10; break;
            case 'l': totalValue += 20; break;
            case 'm': totalValue += 30; break;
            case 'n': totalValue += 40; break;
            case 'o': totalValue += 50; break;
            case 'p': totalValue += 60; break;
            case 'q': totalValue += 70; break;
            case 'r': totalValue += 80; break;
            case 's': totalValue += 90; break;
            case 't': totalValue += 100; break;
            case 'v': totalValue += 200; break;
            case 'x': totalValue += 300; break;
            case 'y': totalValue += 400; break;
            case 'z': totalValue += 500; break;
        }
    }
    cout << totalValue << endl;
}