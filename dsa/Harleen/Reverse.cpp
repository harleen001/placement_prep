#include <iostream>
using namespace std;
int main()
{
    int n=1234;
    int revno=0;//reverse no
    while(n>0)
{
int digit=n%10;//digit
    revno=(revno*10)+digit;
    n=n/10;

}
   cout<<revno; 
}