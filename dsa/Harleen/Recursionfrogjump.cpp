#include <bits/stdc++.h>
using namespace std;

int frogJump(int i, vector<int>& arr) {
    if (i == 0) return 0;  // base case: starting stone

    int left = frogJump(i-1, arr) + abs(arr[i] - arr[i-1]);

    int right = INT_MAX;
    if (i > 1)
        right = frogJump(i-2, arr) + abs(arr[i] - arr[i-2]);

    return min(left, right);
}

int main() {
    vector<int> arr = {30, 10, 60, 10, 60, 50};
    int n = arr.size();

    cout << "Min cost = " << frogJump(n-1, arr) << endl;

    return 0;
}
