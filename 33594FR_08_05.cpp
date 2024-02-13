#include <iostream>
#include <string>
using namespace std;

// Funkcja zamieniająca wartość koloru z systemu dziesiętnego na szesnastkowy
string decimalToHexadecimal(int decimalValue) {
    string hexadecimalResult = "";
    while (decimalValue > 0) {
        int remainder = decimalValue % 16;
        if (remainder < 10) {
            hexadecimalResult = char(remainder + '0') + hexadecimalResult;
        } else {
            hexadecimalResult = char(remainder - 10 + 'A') + hexadecimalResult;
        }
        decimalValue /= 16;
    }
    if (hexadecimalResult.length() == 0)
        return "00";
    if (hexadecimalResult.length() == 1)
        return "0" + hexadecimalResult;
    return hexadecimalResult;
}

int main() {
    int testCases, redComponent, greenComponent, blueComponent;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cin >> redComponent >> greenComponent >> blueComponent;
        string colorHex = "#" + decimalToHexadecimal(redComponent) + decimalToHexadecimal(greenComponent) + decimalToHexadecimal(blueComponent);
        if (colorHex == "#000000")
            cout << "black" << endl;
        else if (colorHex == "#C0C0C0")
            cout << "silver" << endl;
        else if (colorHex == "#808080")
            cout << "gray" << endl;
        else if (colorHex == "#FFFFFF")
            cout << "white" << endl;
        else if (colorHex == "#800000")
            cout << "maroon" << endl;
        else if (colorHex == "#FF0000")
            cout << "red" << endl;
        else if (colorHex == "#800080")
            cout << "purple" << endl;
        else if (colorHex == "#FF00FF")
            cout << "fuchsia" << endl;
        else if (colorHex == "#008000")
            cout << "green" << endl;
        else if (colorHex == "#00FF00")
            cout << "lime" << endl;
        else if (colorHex == "#808000")
            cout << "olive" << endl;
        else if (colorHex == "#FFFF00")
            cout << "yellow" << endl;
        else if (colorHex == "#000080")
            cout << "navy" << endl;
        else if (colorHex == "#0000FF")
            cout << "blue" << endl;
        else if (colorHex == "#008080")
            cout << "teal" << endl;
        else if (colorHex == "#00FFFF")
            cout << "aqua" << endl;
        else
            cout << colorHex << endl;
    }
}