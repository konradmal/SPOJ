#include <iostream>
#include <cmath>
using namespace std;

int nwd(int a, int b)
{
	int tmp;
	if (b > a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

bool czyp(int a)
{
	if (a >= 2)
	{
		if (a == 2)
		{
			return true;
		}
		else if (a != 2 && a % 2 == 0)
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	for (int j = 3; j <= sqrt(a); j += 2)
	{
		if (a % j == 0)
			return false;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	int a, b, j, k;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		k = sqrt(a);
		if (a == b)
		{
			if (czyp(a))
			{
				cout << 1 << endl;
			}
			else if (a % 2 == 0)
			{
				cout << a / 2 << endl;
			}
			else if (k * k == a)
			{
				cout << k << endl;
			}
			else
			{
				j = 3;
				while (a % j != 0)
				{
					j += 2;
				}
				cout << a / j << endl;
			}
		}
		else
		{
			cout << nwd(a, b) << endl;
		}
	}
}