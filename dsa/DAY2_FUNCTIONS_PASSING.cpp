#include <bits/stdc++.h>
using namespace std;

//pass by value/copy(original number didnot change)
void dosomething(int num)
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    int num=10;
    dosomething(num);
    cout<<num<<endl;
    return 0;
}
// &num--> call by refernce, pointer of original value