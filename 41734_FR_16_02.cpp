#include <iostream>
using namespace std;

int main() {
    int prev, curr, next, sampleCount, peakCount = 0;
    cin >> sampleCount;
    cin >> prev >> curr >> next;
    if (prev < curr && curr > next)
        peakCount++;
    for (int i = 0; i < sampleCount - 3; i++)
    {
        prev = curr;
        curr = next;
        cin >> next;
        if (prev < curr && curr > next)
            peakCount++;
    }
    cout << peakCount;
}