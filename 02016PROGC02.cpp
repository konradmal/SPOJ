#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputLine;
    int asciiCounts[256] = {};
    while (getline(cin, inputLine)) {
        asciiCounts[10]++;
        for (char character : inputLine)
            asciiCounts[static_cast<unsigned char>(character)]++;
    }
    for (int i = 0; i < 256; i++)
        if (asciiCounts[i] > 0)
            cout << i << " " << asciiCounts[i] << endl;
}