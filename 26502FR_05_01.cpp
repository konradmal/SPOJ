#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> dayOfWeek = {
		{"Pn", 0}, {"Wt", 1}, {"Sr", 2}, {"Cz", 3}, {"Pt", 4}, {"So", 5}, {"Nd", 6}
	};
	string days[] = { "Pn", "Wt", "Sr", "Cz", "Pt", "So", "Nd" };
	int testCases;
	cin >> testCases;
	string currentDay;
	int n;
	for (int i = 0; i < testCases; i++) {
		cin >> currentDay >> n;
		cout << days[(dayOfWeek[currentDay] + n) % 7] << endl;
	}
}