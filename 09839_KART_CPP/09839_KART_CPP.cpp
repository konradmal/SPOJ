#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int x, y, suma;
	for (int i = 0; i < t; i++)
	{
		suma = 0, y = 5;
		cin >> x;
		while (y <= x)
		{
			suma += x / y;
			y *= 5;
		}
		cout << suma << endl;
	}
}