#include <iostream>
using namespace std;

int powerrecursion(int p,int q)
{
    if(q==0)
    {
        return 1;
    }
    return p*powerrecursion(p,q-1);
}

int main()
{
    int result=powerrecursion(3,4);
    cout<<"Power of 3 multiplied 4 times is = "<<result<<endl;
    return 0;
}