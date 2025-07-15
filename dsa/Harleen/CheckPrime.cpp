#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=9;
    if(num<=1)
    {cout<<false;
    return 0;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<false;
            return 0;
        }
    }
    cout<<true;
    return 0;
}
