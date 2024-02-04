#include <iostream>
using namespace std;

long long binomialCoefficient(int n, int k) {
    if (k > n - k)
        k = n - k;
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int testCases, a, b;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        cin >> a >> b;
        cout << binomialCoefficient(a, b) << endl;
    }
}