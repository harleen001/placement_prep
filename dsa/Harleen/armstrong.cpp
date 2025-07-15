#include <iostream>
using namespace std;
int main()
{
    int digit=0;
    int num=153;
    int finalnum=num;
    int sum=0;
    while(num>0)
    {
        digit=num%10;
        int square=digit*digit*digit;
        sum+=square;
        num=num/10;
    }
if(sum==finalnum)
{
    cout<<"Number is Armstrong";
}
else{
    cout<<"Not Armstrong";
}
}