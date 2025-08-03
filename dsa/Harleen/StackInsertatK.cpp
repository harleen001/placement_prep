#include <bits/stdc++.h>
using namespace std;

void insertatK(stack<int> &st, int value,int k)
{
    stack<int> temp;
    while(!st.empty())
    {
       temp.push(st.top());
       st.pop();
    }
  int count=0;
    while(!temp.empty())
    {
        if(count==k)
        {
            st.push(value);
        }
        st.push(temp.top());
        temp.pop();
        count++;
    }
}

int main()
{
stack<int> vx;
vx.push(10);
vx.push(20);
vx.push(40);
vx.push(50);
insertatK(vx,15,1);
insertatK(vx,30,2);
while(!vx.empty())
{
    cout<<vx.top();
    vx.pop();
}

}