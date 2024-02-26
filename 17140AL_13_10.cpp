#include <iostream>
using namespace std;

int main() {
    int testCaseCount;
    cin >> testCaseCount;
    string mainSequence, subSequence;
    for (int i = 0; i < testCaseCount; i++) {
        cin >> mainSequence >> subSequence;
        int subSeqIndex = 0;
        for (int j = 0; j < mainSequence.length() && subSeqIndex < subSequence.length(); j++) {
            if (mainSequence[j] == subSequence[subSeqIndex]) {
                subSeqIndex++;
            }
        }
        if (subSeqIndex == subSequence.length())
            cout << "Tak" << endl;
        else
            cout << "Nie" << endl;
    }
}