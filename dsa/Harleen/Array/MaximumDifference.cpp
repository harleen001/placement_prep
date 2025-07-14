#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={7,9,5,6,3,2};
    int n=arr.size();
    int minval=arr[0];
    int maxval=INT_MIN;
    for(int i=0;i<n;i++)
    {
       maxval=max(maxval,arr[i]-minval);
       minval=min(minval,arr[i]);
    }
    cout<<maxval;
    return 0;
}