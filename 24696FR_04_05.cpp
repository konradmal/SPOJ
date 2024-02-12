#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int testCases;
	double radius1, radius2, moonAreaSum;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		cin >> radius1 >> radius2;
		radius1 *= 2;
		radius2 *= 2;
		moonAreaSum = radius1 * radius2 / 2;
		cout << fixed << setprecision(2) << moonAreaSum << endl;
	}
}