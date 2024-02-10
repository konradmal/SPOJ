#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int class3a, class3b, class4j, boys = 0, girls = 0;
    cin >> class3a >> class3b >> class4j;
    string name;
    for (int i = 0; i < class3a + class3b + class4j; i++) {
        cin >> name;
        if (name[name.length() - 1] == 'a')
            girls++;
        else
            boys++;
    }
    cout << min(girls, boys);
}