#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={100,180,260,310,40,535,695};
    int sum=0;
    for(int i=1;i<arr.size();i++)
{
if(arr[i]>arr[i-1])
{
    sum+=arr[i]-arr[i-1];
}
}
cout<<sum;

}