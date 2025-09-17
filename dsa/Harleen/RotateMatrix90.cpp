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

void rotate90(const vector<vector<int>>& arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int j = 0; j < cols; j++) {
            // top to bottom
            for (int i = arr[0].size()-1; i>=0; i--) {
                cout << arr[i][j] << " ";
            
        } 
        cout<<endl;

    }
    cout << endl;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2,3},
        {4,5,6},
        {7,8,9},
    };

    print2d(arr);
    rotate90(arr);


    return 0;
}
