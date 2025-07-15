#include <iostream>
using namespace std;
int main()
{
    int n=121;
    int original=n;
    int revno=0;
    while(n>0)
    {
   int digit=n%10;
   revno=(revno*10)+digit;
   n=n/10;
    }
    if(revno==original)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
}