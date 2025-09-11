#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,4,4,2,1,7,8,8};
    sort(arr.begin(), arr.end());

    int n = arr.size();
    for (int i = 0; i < n; )
    {
        int j = i + 1;
        while (j < n && arr[j] == arr[i]) {
            j++; // skip duplicates
        }
        if (j == i + 1) { 
            cout << arr[i] << " ";
        }
        i = j; 
    }
}
