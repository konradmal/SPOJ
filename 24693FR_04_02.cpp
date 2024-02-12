#include <iostream>
using namespace std;

int main() {
    int queries, numPeople, querySeat, oppositeSeat;
    cin >> queries;
    
    for (int i = 0; i < queries; i++) {
        cin >> numPeople >> querySeat;
        if (numPeople % 2 == 1)
            cout << "BRAK" << endl;
        else {
            oppositeSeat = querySeat + numPeople / 2;
            if (oppositeSeat > numPeople)
                oppositeSeat -= numPeople;
            cout << oppositeSeat << endl;
        }
    }
}
