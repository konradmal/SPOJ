#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0 && b == c)
		cout << "NWR";
	else if (a == 0 && b != c)
		cout << "BR";
	else
		cout << fixed << setprecision(2) << (c - b) / a;
}