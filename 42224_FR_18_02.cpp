#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double netAmount, grossAmount;
    cin >> netAmount >> grossAmount;
    double vatAmount = grossAmount - netAmount;
    double deductibleVAT = vatAmount / 2.0;
    double taxDeductibleCost = netAmount + deductibleVAT;
    cout << fixed << setprecision(2) << deductibleVAT << " " << taxDeductibleCost;
}