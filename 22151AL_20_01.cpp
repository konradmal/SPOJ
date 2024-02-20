#include <iostream>
#include <string>
using namespace std;

string morseCode(char letter) {
    switch (letter) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return ".-..";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return "..-.";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

int main()
{
	string line;
    char letter;
    while (getline(cin, line)) {
	    for (int i = 0; i < line.length(); i++) {
		    letter = toupper(line[i]);
            cout << morseCode(letter) << "/";
	    }
        cout << endl;
    }
}