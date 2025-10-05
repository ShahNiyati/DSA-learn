#include<bits/stdc++.h>
using namespace std;
void reversedStack(stack<int>&result,stack<int>&st){
    if(st.empty()){
        return;
    }
    result.push(st.top());
    st.pop();
    reversedStack(result,st);
}

int main()
{
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    stack<int>result;
    reversedStack(result,st);
    while(result.empty()){
        cout<<result.top()<<" ";
        result.pop();
    }
    return 0;
}