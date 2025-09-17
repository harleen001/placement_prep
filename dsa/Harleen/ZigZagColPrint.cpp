#include <bits/stdc++.h>
using namespace std;

// Function to print 2D vector
void print2d(const vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void zigzag(const vector<vector<int>>& arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // top to bottom
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}
int main() {
    vector<vector<int>> arr = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
        {9, 10}
    };

    zigzag(arr);
    

    return 0;
}
