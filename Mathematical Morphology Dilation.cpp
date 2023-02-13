#include <iostream>
#include <vector>
using namespace std;

// Function to input points into a vector
vector<pair<int, int>> inputPoints(int numPoints) {
    vector<pair<int, int>> points(numPoints);
    for (int i = 0; i < numPoints; i++) {
        int x, y;
        cout << "Enter the " << i+1 << "th point (x y): ";
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }
    return points;
}

// Function to perform dilation on two sets of points
vector<pair<int, int>> performDilation(vector<pair<int, int>> pointsA, vector<pair<int, int>> pointsB) {
    vector<pair<int, int>> result;
    for (int i = 0; i < pointsB.size(); i++) {
        for (int j = 0; j < pointsA.size(); j++) {
            int x = pointsB[i].first + pointsA[j].first;
            int y = pointsB[i].second + pointsA[j].second;
            result.push_back(make_pair(x, y));
        }
    }
    return result;
}

// Function to display a vector of points
void displayPoints(vector<pair<int, int>> points) {
    for (int i = 0; i < points.size(); i++) {
        cout << "(" << points[i].first << ", " << points[i].second << ") ";
    }
    cout << endl;
}

int main() {
    int numPointsA, numPointsB;

    cout << "Enter the number of points in set A: ";
    cin >> numPointsA;
    vector<pair<int, int>> pointsA = inputPoints(numPointsA);

    cout << "Enter the number of points in set B: ";
    cin >> numPointsB;
    vector<pair<int, int>> pointsB = inputPoints(numPointsB);

    vector<pair<int, int>> result = performDilation(pointsA, pointsB);

    cout << "Set A: ";
    displayPoints(pointsA);

    cout << "Set B: ";
    displayPoints(pointsB);

    cout << "Dilation Result: ";
    displayPoints(result);

    return 0;
}
