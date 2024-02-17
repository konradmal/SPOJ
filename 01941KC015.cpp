#include <iostream>
using namespace std;

bool areEqual(string num1, string num2) {
    return num1 == num2;
}

bool isGreater(string num1, string num2) {
    if (num1.length() > num2.length()) 
        return true;
    else if (num1.length() < num2.length()) 
        return false;
    return num1 > num2;
}

bool isLess(string num1, string num2) {
    if (num1.length() < num2.length()) return true;
    else if (num1.length() > num2.length()) return false;
    return num1 < num2;
}

int main() {
    string firstNumber, operatorSymbol, secondNumber;
    while (cin >> firstNumber >> operatorSymbol >> secondNumber) {
        if (operatorSymbol == "==") cout << areEqual(firstNumber, secondNumber) << endl;
        else if (operatorSymbol == "!=") cout << !areEqual(firstNumber, secondNumber) << endl;
        else if (operatorSymbol == ">=") cout << (isGreater(firstNumber, secondNumber) || areEqual(firstNumber, secondNumber)) << endl;
        else if (operatorSymbol == "<=") cout << (isLess(firstNumber, secondNumber) || areEqual(firstNumber, secondNumber)) << endl;
    }
}