#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	float n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 3; j >= 0; j--) {
			cout << hex << (int)(((const unsigned char*)&n)[j]) << " ";
		}
		cout << endl;
	}
}