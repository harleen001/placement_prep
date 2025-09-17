#include <iostream>
using namespace std;
bool armstrong(int num)
{
    if(num==0)return true;
    armstrong(num/10);
    
    num=num%10;


  
}
int main()
{
    cout<<gcd(12,20);
    return 0;
}