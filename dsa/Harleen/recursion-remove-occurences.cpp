#include <iostream>
using namespace std;

string recursion(const string &str,int idx, int n)
{
    if(idx==n) return "";
    
   if(str[idx]=='a')
   {
    return string("")+recursion(str, idx+1,n);
   }
   else
   {
    return string(1,str[idx])+recursion(str, idx+1,n);
   }
}
int main()
{
string str1="abcax";
cout<<recursion(str1,0,str1.size());
return 0;

}