#include <bits/stdc++.h>
using namespace std;


stack<int> copystack(stack<int> &st)
{
    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
  stack<int> result; 
  while(!temp.empty())
    {
        result.push(temp.top());
        temp.pop();
    }
    cout<<result.top();
    return result;
}

void recursioncall(stack<int>&st,stack<int>&res)
{
    if(st.empty())
    {
        return;
    }
    int curr=st.top();
    st.pop();
    recursioncall(st,res);
    res.push(curr);
}
int main()

{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // copystack(st);

    stack<int> result;
    recursioncall(st,result);
    while(result.top()!=-1)
    {
        cout<<result.top();
        result.pop();
    }
    return 0;
}