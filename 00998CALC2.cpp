#include <iostream>
using namespace std;

int main() {
    int memory[10] = { 0 };
    char operation;
    int operand1, operand2;
    while (cin >> operation >> operand1 >> operand2) {
        switch (operation) {
            case 'z':
                memory[operand1] = operand2;
                break;
            case '+':
                cout << memory[operand1] + memory[operand2] << endl;
                break;
            case '-':
                cout << memory[operand1] - memory[operand2] << endl;
                break;
            case '*':
                cout << memory[operand1] * memory[operand2] << endl;
                break;
            case '/':
                cout << memory[operand1] / memory[operand2] << endl;
                break;
            case '%':
                cout << memory[operand1] % memory[operand2] << endl;
                break;
        }
    }
}