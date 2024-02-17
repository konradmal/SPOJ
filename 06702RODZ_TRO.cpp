#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c) {
		if (!(a + b > c && a + c > b && b + c > a))
			cout << "brak" << endl;
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			cout << "prostokatny" << endl;
		else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
			cout << "rozwartokatny" << endl;
		else
			cout << "ostrokatny" << endl;
	}
}