#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    vector<int> matrix(rows * columns);
    for (int i = 0; i < rows * columns; i++) {
        cin >> matrix[i];
    }
    for (int i = 0; i < columns; i++) {
        for (int j = i; j < rows * columns; j += columns) {
            cout << matrix[j] << " ";
        }
        cout << endl;
    }
}