#include <bits/stdc++.h>
using namespace std;
int main()
{
 int nums[]={2,7,11,16};
    int target=9;
    int n=sizeof(nums)/sizeof(nums[0]);
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
    int complement= target-nums[i];
    if(mp.count(complement))
    {
        cout<<mp[complement]<<" "<<i;
    }
    mp[nums[i]]=i;
    }
   
}