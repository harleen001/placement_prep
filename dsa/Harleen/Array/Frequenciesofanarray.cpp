#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={10,10,10,25,30,30};
    unordered_map<int,int> mp;
    for(int num:arr)
    {
        mp[num]++;
    }
    for(auto &it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}