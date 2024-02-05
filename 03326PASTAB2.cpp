#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalNumbers;
    long number, comparisonValue;
    vector<long> numbers;
    char operation;
    
    cin >> totalNumbers;
    for (int i = 0; i < totalNumbers; i++) {
        cin >> number;
        numbers.push_back(number);
    }
    
    cin >> operation >> comparisonValue;
    for (int i = 0; i < numbers.size(); i++) {
        if ((operation == '>' && numbers[i] > comparisonValue) || 
            (operation == '<' && numbers[i] < comparisonValue)) {
            cout << numbers[i] << endl;
        }
    }
}