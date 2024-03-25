#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int testCaseCount;
    double firstDiscountPercent, secondDiscountPercent, finalPricePercent;
    cin >> testCaseCount;
    for (int i = 0; i < testCaseCount; i++) {
        finalPricePercent = 100;
        cin >> firstDiscountPercent >> secondDiscountPercent;
        finalPricePercent -= firstDiscountPercent / 100 * finalPricePercent;
        finalPricePercent -= secondDiscountPercent / 100 * finalPricePercent;
        cout << fixed << setprecision(2) << 100 - finalPricePercent << endl;
    }
}