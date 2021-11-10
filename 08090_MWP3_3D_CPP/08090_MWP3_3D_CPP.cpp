#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	double a, b;
	double wyn;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if ((int)b % 2 == 0) 
		{
			cout << fixed << setprecision(3) << M_PI * a / b << " ";
			cout << int(b / 2) << endl;
		}
		else
		{
			cout << fixed << setprecision(3) << M_PI * a / b / 2 << " ";
			cout << int(b) << endl;
		}
	}
}