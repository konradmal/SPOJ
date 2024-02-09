#include <iostream>
using namespace std;

int main() {
    string tower1Position, tower2Position;
    cin >> tower1Position >> tower2Position;
    if (tower1Position[0] == tower2Position[0] || tower1Position[1] == tower2Position[1])
        cout << "TAK";
    else
        cout << "NIE";
}