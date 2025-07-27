#include <bits/stdc++.h>
using namespace std;

void insertatBottom(stack<int> &st, int value)
{
    stack<int> temp;
    while(!st.empty())
    {
       temp.push(st.top());
       st.pop();
    }
    st.push(value);
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
stack<int> vx;
vx.push(10);
vx.push(20);
vx.push(30);
vx.push(40);
vx.push(50);
vx.push(60);
insertatBottom(vx,5);
while(!vx.empty())
{
    cout<<vx.top();
    vx.pop();
}

}