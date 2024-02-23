#include <iostream>
using namespace std;

int main() {
    string darekAnswers, jarekAnswers, marekAnswers;
    cin >> darekAnswers >> jarekAnswers >> marekAnswers;
    int maxPoints = 0;
    for (int i = 0; i < darekAnswers.length(); i++) {
        if (darekAnswers[i] != jarekAnswers[i]) 
            maxPoints++;
        if (darekAnswers[i] != marekAnswers[i] && marekAnswers[i] == jarekAnswers[i])
            maxPoints++;
        if (jarekAnswers[i] == darekAnswers[i] && marekAnswers[i] != jarekAnswers[i])
            maxPoints++;
    }
    cout << maxPoints;
}
