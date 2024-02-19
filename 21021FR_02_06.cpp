#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> underweight;
    vector<string> normal;
    vector<string> overweight;
    int numberOfPeople;
    cin >> numberOfPeople;
    string name;
    double weight, height, bmi;
    for (int i = 0; i < numberOfPeople; i++) {
        cin >> name >> weight >> height;
        bmi = weight / (height / 100 * height / 100);
        if (bmi < 18.5)
            underweight.push_back(name);
        else if (bmi < 25)
            normal.push_back(name);
        else
            overweight.push_back(name);
    }
    cout << "niedowaga" << endl;
    for (string name : underweight)
        cout << name << endl;
    cout << "wartosc prawidlowa" << endl;
    for (string name : normal)
        cout << name << endl;
    cout << "nadwaga" << endl;
    for (string name : overweight)
        cout << name << endl;
}