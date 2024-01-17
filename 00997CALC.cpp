#include <iostream>
using namespace std;

int main()
{
	char z;
	int a, b;
	while (cin >> z >> a >> b) {
		switch (z)
		{
			case '+':
				cout << a + b << endl;
				break;
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
				break;
			case '%':
				cout << a % b << endl;
				break;
		}
	}
}