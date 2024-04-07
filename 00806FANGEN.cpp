#include <iostream>
using namespace std;

int main() {
    int windmillOrder;
    while (cin >> windmillOrder && windmillOrder != 0) {
        if (windmillOrder == 1 || windmillOrder == -1)
            cout << "**" << endl << "**" << endl;
        else if (windmillOrder > 1) {
            for (int row = 0; row < windmillOrder; row++) {
                for (int col = 0; col <= row; col++)
                    cout << "*";
                for (int col = row + 1; col < windmillOrder; col++)
                    cout << ".";
                for (int col = row; col < windmillOrder; col++)
                    cout << "*";
                for (int col = row; col > 0; col--)
                    cout << ".";
                cout << endl;
            }
            for (int row = 0; row < windmillOrder; row++) {
                for (int col = row + 1; col < windmillOrder; col++)
                    cout << ".";
                for (int col = 0; col <= row; col++)
                    cout << "*";
                for (int col = row; col > 0; col--)
                    cout << ".";
                for (int col = row; col < windmillOrder; col++)
                    cout << "*";
                cout << endl;
            }
        } else {
            windmillOrder = -windmillOrder;
            for (int row = 0; row < windmillOrder; row++) {
                for (int col = row; col > 0; col--)
                    cout << ".";
                for (int col = row; col < windmillOrder; col++)
                    cout << "*";
                for (int col = row + 1; col < windmillOrder; col++)
                    cout << ".";
                for (int col = 0; col <= row; col++)
                    cout << "*";
                cout << endl;
            }
            for (int row = 0; row < windmillOrder; row++) {
                for (int col = row; col < windmillOrder; col++)
                    cout << "*";
                for (int col = row; col > 0; col--)
                    cout << ".";
                for (int col = 0; col <= row; col++)
                    cout << "*";
                for (int col = row + 1; col < windmillOrder; col++)
                    cout << ".";
                cout << endl;
            }
        }
        cout << endl;
    }
}