#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int test = 0; test < n; test++) {
        int a;
        cin >> a;
        int* tab = new int[a];
        for (int j = a - 1; j >= 0; j--) {
            cin >> tab[j];
        }
        for (int j = 0; j < a; j++) {
            cout << tab[j] << " ";
        }
        cout << endl;
        delete[] tab;
    }
}