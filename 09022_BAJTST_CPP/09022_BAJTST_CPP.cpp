#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	double k, a, b, c, p, suma;
	for (int i = 0; i < t; i++)
	{
		suma = 0;
		cin >> n >> k;
		for (int j = 0; j < n; j++)
		{
			cin >> a >> b >> c;
			if (a + b > c && a + c > b && b + c > a)
			{
				p = (a + b + c) / 2;
				suma = suma + sqrt(p * (p - a) * (p - b) * (p - c));
			}
		}
		suma = suma * k / 10;
		cout << fixed << setprecision(0) << round(suma) << endl;
	}
}