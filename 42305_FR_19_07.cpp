#include <iostream>
using namespace std;

int main() {
    int numberOfLines;
    cin >> numberOfLines;
    int wordsInLine;
    string word;
    for (int lineIndex = 0; lineIndex < numberOfLines; lineIndex++)
    {
        cin >> wordsInLine;
        for (int wordIndex = 0; wordIndex < wordsInLine; wordIndex++)
        {
            cin >> word;
            if (word != ":)" && word != ":(" && word != ";)" && word != ":D" &&
                word != ":P" && word != "xD" && word != ":>" && word != "<3")
            {
                cout << word << " ";
            }
        }
        cout << endl;
    }
}