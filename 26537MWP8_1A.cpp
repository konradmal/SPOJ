#include <iostream>
#include <vector>
using namespace std;

int gcdRecursiveOptimized(int a, int b){
    if (!b){
        return a;
    }
    return gcdRecursiveOptimized(b, a % b);
}

int main() {
    int numberOfElements, element;
    vector<int> sequenceElements;
    cin >> numberOfElements;
    for (int i = 0; i < numberOfElements; i++) {
        cin >> element;
        sequenceElements.push_back(element);
    }
    for (int i = 0; i < sequenceElements.size(); i++)
        for (int j = 0; j < sequenceElements.size(); j++)
            cout << gcdRecursiveOptimized(sequenceElements[i], sequenceElements[j]) << " ";
        cout << endl;
}