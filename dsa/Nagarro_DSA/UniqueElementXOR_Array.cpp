#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,4,4,2,1,7,8,8};
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int result=0;
    for (int i = 0; i < n;i++ )
    {
      result^=arr[i];
    }
    cout<<result;
    return 0;
}
//two sum, unordered_map, xor- unique element