#include <iostream>
#include <cmath>
#include <iomanip> // Dla std::setfill i std::setw
using namespace std;

int toDecimal(const string& binaryNumber) {
    int result = 0;
    for (int i = 0; i < binaryNumber.length(); i++) {
        if (binaryNumber[i] == '1') {
            result += static_cast<int>(pow(2, binaryNumber.length() - i - 1));
        }
    }
    return result;
}

int main() {
    string binaryHourTens, binaryHourOnes, binaryMinuteTens, binaryMinuteOnes;
    cin >> binaryHourTens >> binaryHourOnes >> binaryMinuteTens >> binaryMinuteOnes;
    cout << toDecimal(binaryHourTens) << toDecimal(binaryHourOnes) << ":" << toDecimal(binaryMinuteTens) << toDecimal(binaryMinuteOnes);
}
