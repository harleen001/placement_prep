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
int main()

{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    copystack(st);
    return 0;
}