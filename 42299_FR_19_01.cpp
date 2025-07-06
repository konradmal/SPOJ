#include <iostream>
using namespace std;

int main() {
    int participantsFromCity, totalMeals = 5;
    for (int i = 0; i < 5; i++)
    {
        cin >> participantsFromCity;
        totalMeals += participantsFromCity;
    }
    cout << totalMeals;
}