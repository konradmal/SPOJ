#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sieveOfEratosthenesList(int start, int end) {
    vector<int> primeList;
    bool *primes = new bool[end + 1];
    fill_n(primes, end + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i <= sqrt(end); ++i) {
        if (primes[i]) {
            for (int multiple = i * i; multiple <= end; multiple += i) {
                primes[multiple] = false;
            }
        }
    }
    for (int i = start; i <= end; ++i) {
        if (primes[i]) {
            primeList.push_back(i);
        }
    }
    delete[] primes;
    return primeList;
}

int main() {
    int testCaseCount, targetSum;
    cin >> testCaseCount;
    vector<int> primeNumbers = sieveOfEratosthenesList(2, 400);
    bool sumFound;
    for (int i = 0; i < testCaseCount; i++) {
        cin >> targetSum;
        sumFound = false;
        for (int primeA : primeNumbers) {
            if (sumFound) 
                break;
            for (int primeB : primeNumbers)
                if (primeA + primeB == targetSum) {
                    cout << "TAK " << primeA << " " << primeB << endl;
                    sumFound = true;
                    break;
                }
        }
        if (!sumFound)
            cout << "NIE" << endl;
    }
}