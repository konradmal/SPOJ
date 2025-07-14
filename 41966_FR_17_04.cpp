#include <iostream>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    int testCount;
    cin >> testCount;
    for (int test = 0; test < testCount; test++) {
        int maciekPizzaCount, maciekDiameter, grzesiekPizzaCount, grzesiekDiameter;
        cin >> maciekPizzaCount >> maciekDiameter >> grzesiekPizzaCount >> grzesiekDiameter;
        double maciekArea = maciekPizzaCount * M_PI * (maciekDiameter * maciekDiameter) / 4.0;
        double grzesiekArea = grzesiekPizzaCount * M_PI * (grzesiekDiameter * grzesiekDiameter) / 4.0;
        if (maciekArea > grzesiekArea)
            cout << "Maciek" << endl;
        else if (maciekArea < grzesiekArea)
            cout << "Grzesiek" << endl;
        else
            cout << "porcje sa takie same" << endl;
    }
}