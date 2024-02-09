#include <iostream>
using namespace std;

int main() {
    int totalStationaryParticipants = 0, totalParticipants, remoteParticipants;
    for (int i = 0; i < 4; i++) {
        cin >> totalParticipants >> remoteParticipants;
        totalStationaryParticipants += totalParticipants - remoteParticipants;
    }
    cout << totalStationaryParticipants;
}