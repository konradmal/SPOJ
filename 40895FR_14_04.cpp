#include <iostream>
using namespace std;

int cardValue(char card) {
    switch (card) {
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
    }
}

int main() {
    string jasioCards, stasioCards;
    cin >> jasioCards >> stasioCards;
    int jasioScore = 0, stasioScore = 0;
    for (char card : jasioCards)
        jasioScore += cardValue(card);
    for (char card : stasioCards)
        stasioScore += cardValue(card);
    if (jasioScore > stasioScore)
        cout << "JASIO";
    else if (jasioScore < stasioScore)
        cout << "STASIO";
    else
        cout << "REMIS";
}