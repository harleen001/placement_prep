#include <bits/stdc++.h>
using namespace std;
vector<int> topkfrequent(vector<int> &arr,int k)
{
    vector<int> outputarray;
    unordered_map<int,int> mp;
    for(int i:arr)
    {
        mp[i]++;
    }

    vector<pair<int,int>> result;
    for(auto it:mp)
    {
        result.push_back({it.second,it.first});
    }
    sort(result.rbegin(),result.rend());

    for(int i=0;i<k;i++)
    {
    outputarray.push_back(result[i].second);
    }
    return outputarray;
}
int main()
{
vector<int> arr={1,3,2,3,4,3,2,4,3,4,1,2,4,1,2,4,1,3,2,4,3,4,3,3,4,4,3,2,3,4,3,2,4}; 
vector<int> result=topkfrequent(arr,3);
for(int x:result)
{
    cout<<x<<" "<<endl;
}
return 0;
}