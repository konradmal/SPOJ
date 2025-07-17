#include <iostream>
#include <set>
using namespace std;

int main() {
    int numberOfPeople, buildingNumber;
    string surname;
    set<int> occupiedBuildings;
    cin >> numberOfPeople;
    for (int i = 0; i < numberOfPeople; i++)
    {
        cin >> buildingNumber >> surname;
        occupiedBuildings.insert(buildingNumber);
    }
    cout << occupiedBuildings.size() << endl;
}