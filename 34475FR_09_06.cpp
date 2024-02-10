#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int maxi, mini, testCases;
	string word;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		int maxChar = 'A';
		int miniChar = 'Z';
		cin >> word;
		for (int j = 0; j < word.length(); j++) {
			maxChar = max(maxChar, int(word[j]));
			miniChar = min(miniChar, int(word[j]));
		}
		cout << maxChar - miniChar << endl;
	}
}