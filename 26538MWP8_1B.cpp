#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> originalSongWords;
    vector<string> rememberedSongWords;
    string word;
    while (true) {
        cin >> word;
        originalSongWords.push_back(word);
        if (cin.peek() == '\n') 
            break;
    }
    cin.ignore();
    while (true) {
        cin >> word;
        rememberedSongWords.push_back(word);
        if (cin.peek() == '\n') 
            break;
    }
    for (string rememberedWord : rememberedSongWords) {
        auto pos = find(originalSongWords.begin(), originalSongWords.end(), rememberedWord);
        if (pos != originalSongWords.end())
            originalSongWords.erase(pos);
    }
    sort(originalSongWords.begin(), originalSongWords.end());
    cout << originalSongWords.size() << endl;
    for (string word : originalSongWords) {
        cout << word << endl;
    }
}