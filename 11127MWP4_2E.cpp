#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCases;
    cin >> testCases;
    int numPeople, numMessages, initialSpeaker, sender, receiver;
    for (int i = 0; i < testCases; i++) {
        cin >> numPeople >> numMessages >> initialSpeaker;
        vector<int> hasHeardMessage(numPeople + 1, 0);
        hasHeardMessage[initialSpeaker] = 1;
        cout << initialSpeaker;
        for (int j = 0; j < numMessages; j++) {
            cin >> sender >> receiver;
            if (hasHeardMessage[sender] && !hasHeardMessage[receiver]) {
                hasHeardMessage[receiver] = 1;
                cout << " " << receiver;
            }
        }
        cout << endl;
    }
}