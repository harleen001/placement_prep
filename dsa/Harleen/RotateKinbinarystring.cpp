#include <iostream>
#include <string.h>
using namespace std;

int krotate(string &s1,int k)
{
    int left=0,right=0;
    int maxlen=0;
    int n=s1.length();
    int zerocount=0;
     while(right<n)
     {
        if(s1[right]=='0')
        {
            zerocount++;
        }
     
      while(zerocount>k)
     {
        if(s1[left]=='0')
        {
            zerocount--;
        }
        left++;
     }
   maxlen=max(maxlen,right-left+1);
   right++;
    }
    return maxlen;
}

int main()
{
    string s1="0001101011";
cout<<krotate(s1,2);

return 0;
}