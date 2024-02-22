#include <iostream>
using namespace std;

int main()
{
    int currentInput = -1, highestValue = 0, chosenPresent = 0;
    while(currentInput != 0) {
        if(currentInput > chosenPresent && currentInput != highestValue)
            chosenPresent = currentInput;
        cin >> currentInput;
        if(currentInput > highestValue) {
            chosenPresent = highestValue;
            highestValue = currentInput;
        }
    }
    if(chosenPresent == 0)
        chosenPresent = highestValue;
    cout << chosenPresent;
}