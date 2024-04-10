#include <iostream>
using namespace std;

int main()
{
	string symbol;
	cin >> symbol;
	if (symbol == "papier")
		cout << "nozyce";
	else if (symbol == "kamien")
		cout << "papier";
	else if (symbol == "nozyce")
		cout << "kamien";
	else
		cout << "przegrales";
}