#include <iostream>
using namespace std;

int main() {
    long long numberOfCities, currentProfit = 0, maxProfit = 0, profit;
    cin >> numberOfCities;
    for (int i = 0; i < numberOfCities; i++) {
        cin >> profit;
        currentProfit += profit;
        if (currentProfit > maxProfit) {
            maxProfit = currentProfit;
        } 
        if (currentProfit < 0) {
            currentProfit = 0;
        }
    }
    cout << maxProfit << endl;
}