#include <iostream>
using namespace std;
int main()
{
    int n1=20,n2=15;
    int hcf=1;
    int minno=min(n1,n2);
    for(int i=1;i<minno;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
}