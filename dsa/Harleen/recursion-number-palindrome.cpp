#include <iostream>
using namespace std;

int reversenum(int num, int rev=0)
{
    if(num==0) return rev;
    return reversenum(num/10, rev*10+num%10);
}
bool recursionpalindrome(int num)
{

  return num==reversenum(num);
}

int main()
{
    int num=1266721;
    cout<<recursionpalindrome(num);
    return 0;
}