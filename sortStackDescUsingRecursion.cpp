#include<iostream>
using namespace std;
void insertedSort(stack<int>&st,int x){
        if(st.empty() || st.top()<=x){
            st.push(x);
            return;
        }
        int temp = st.top();
        st.pop();
        insertedSort(st,x);
        st.push(temp);
    }
    void sortStack(stack<int> &st) {
        if(st.empty()){
            return;
        }
        int topEle = st.top();
        st.pop();
        sortStack(st);
        insertedSort(st,topEle);
    }
int main()
{
    stack<int>st;
    st.push(4);
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(2);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}