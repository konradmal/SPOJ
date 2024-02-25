#include <iostream>
using namespace std;

int main() {
    long long n, cuts, pieces;
    while (cin >> n) {
        cuts = 1;
        pieces = 1;
        while (pieces < n) {
            pieces += cuts;
            cuts++;
        }
        cout << cuts - 1 << endl;
    }
}