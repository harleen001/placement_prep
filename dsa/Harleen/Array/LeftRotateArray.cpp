#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr={1,2,3,4,5};
    rotate(arr.begin(),arr.begin()+1,arr.end());

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}