#include <iostream>

using namespace std;

int main()
{
    int maxAllowedLength;
    cin >> maxAllowedLength;
    string identifier;
    cin >> identifier;
    int currentLength = identifier.length();
    if (currentLength > maxAllowedLength) {
        for (int i = currentLength - 1; i >= 0; i--) {
            if (currentLength > maxAllowedLength) {
                if (((identifier[i] >= 0 && identifier[i] <= 47) || 
                     (identifier[i] >= 58 && identifier[i] <= 64) || 
                     (identifier[i] >= 91 && identifier[i] <= 96) || 
                     (identifier[i] >= 123)) && 
                     (identifier[i] != '$')) {
                    identifier.erase(i, 1);
                    currentLength--;
                    if (i < currentLength - 1)
                        i++;
                }
            }
            else
                break;
        }
        for (int i = currentLength - 1; i >= 0; i--) {
            if (currentLength > maxAllowedLength) {
                if (((identifier[i] >= 0 && identifier[i] <= 64) || 
                     (identifier[i] >= 91 && identifier[i] <= 96) || 
                     (identifier[i] >= 123)) && 
                     (identifier[i] != '$')) {
                    identifier.erase(i, 1);
                    currentLength--;
                    if (i < currentLength - 1)
                        i++;
                }
            }
            else
                break;
        }
        bool isFirstVowel = true;
        for (int i = 0; i < currentLength; i++) {
            if (currentLength > maxAllowedLength) {
                if (identifier[i] == 'A' || identifier[i] == 'a' || 
                    identifier[i] == 'E' || identifier[i] == 'e' || 
                    identifier[i] == 'I' || identifier[i] == 'i' || 
                    identifier[i] == 'O' || identifier[i] == 'o' || 
                    identifier[i] == 'U' || identifier[i] == 'u' || 
                    identifier[i] == 'Y' || identifier[i] == 'y') {
                    if (isFirstVowel) {
                        isFirstVowel = false;
                    }
                    else {
                        identifier.erase(i, 1);
                        currentLength--;
                        if (i > 0)
                            i--;
                    }
                }
            }
            else
                break;
        }
        for (int i = currentLength - 2; i >= 0; i--) {
            if (currentLength > maxAllowedLength) {
                identifier.erase(i, 1);
                currentLength--;
                if (i < currentLength - 1)
                    i++;
            }
            else
                break;
        }
    }
    cout << identifier;
}