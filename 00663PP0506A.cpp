#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Point {
public:
    string name;
    double x, y, distanceFromOrigin;
    Point(string n, double xCoord, double yCoord) {
        name = n;
        x = xCoord;
        y = yCoord;
        distanceFromOrigin = sqrt(x * x + y * y);
    }
};

bool comparePoints(Point a, Point b) {
    return a.distanceFromOrigin < b.distanceFromOrigin;
}

int main() {
    int t, n;
    cin >> t;
    string name;
    double x, y;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<Point> points;
        for (int j = 0; j < n; j++) {
            cin >> name >> x >> y;
            points.push_back(Point(name, x, y));
        }
        sort(points.begin(), points.end(), comparePoints);
        for (Point point : points) {
            cout << point.name << " " << point.x << " " << point.y << endl;
        }
        cout << endl;
    }
}
