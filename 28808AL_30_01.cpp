#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string word1, string word2) {
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    return word1 == word2;
}

int main() {
    string baseWord, testWord;
    int numOfTests, countAnagrams = 0;
    cin >> baseWord >> numOfTests;
    for (int i = 0; i < numOfTests; i++) {
        cin >> testWord;
        if (isAnagram(baseWord, testWord))
            countAnagrams++;
    }
    cout << countAnagrams;
}