#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double pi = 3.141592654;
    double radius, diameter, area;
    cin >> radius >> diameter;
    double halfDiameterSquared = (diameter / 2) * (diameter / 2);
    area = pi * (radius * radius - halfDiameterSquared);
    cout << fixed << setprecision(2) << area << endl;
}