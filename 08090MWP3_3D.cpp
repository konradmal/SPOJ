#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double pi = acos(-1.0);

int main()
{
	int testCases;
	cin >> testCases;
	double boxSide, people;
	for (int i = 0; i < testCases; i++) {
		cin >> boxSide >> people;
		if (int(people) % 2 == 0)
			cout << fixed << setprecision(3) << boxSide * pi / people << " " << int(people) / 2 << endl;
		else
			cout << fixed << setprecision(3) << boxSide * pi / people / 2 << " " << int(people) << endl;
	}
}