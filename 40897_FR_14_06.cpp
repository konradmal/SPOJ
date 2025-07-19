#include <iostream>
using namespace std;

int main() {
    int stickCountByLength[257] = {};
    int totalSticks, stickLength;
    cin >> totalSticks;
    for (int i = 0; i < totalSticks; i++)
    {
        cin >> stickLength;
        stickCountByLength[stickLength]++;
    }
    int triangles = 0;
    for (int i = 1; i < 257; i++)
    {
        triangles += stickCountByLength[i] / 3;
    }
    cout << triangles;
}