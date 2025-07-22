#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    stack<int> s1;
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.emplace(7);
    cout<<s1.top()<<endl;//prints 7
    s1.pop();
    cout<<s1.top()<<endl;//prints 6
    
    cout<<s1.size()<<endl;//prints 3
    cout<<s1.empty()<<endl;//prints 0
    stack <int> st2;
    st2.push(9);
    st2.push(10);
    st2.push(11);
    s1.swap(st2);
    cout<<st2.top()<<endl;//prints 6
    cout<<s1.top()<<endl;//prints 11
}
void explainqueue(){
    queue<int >q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);//{1,2,3,4,5,6}
    cout<<q.back()<<endl;//prints 6
    //q.back()+=5;-but prints 6 error
    cout<<q.back()<<endl;//prints 11
    cout<<q.front()<<endl;//prints 1
    q.pop();
    cout<<q.front()<<endl;//prints 2
    cout<<q.size()<<endl;//prints 5
    //same function of stack as well as queue
}
void explainpriorityq(){
    priority_queue<int>p1;  //called max heap
    p1.push(4);             
    p1.push(5);
    p1.push(15);
    p1.push(9);
    p1.push(10);//{15,10,9,5,4}
    cout<<p1.top()<<endl;//prints 15
    p1.pop();
    cout<<p1.top()<<endl;//prints 10
    p1.emplace(11);//{11,10,9,5,4}
    cout<<p1.top()<<endl;//prints 11

    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(9);
    pq.push(10);
    pq.push(3);
    pq.push(1);
    pq.push(7);//{1,3,7,9,10}
    cout<<pq.top()<<endl;//prints 1
    pq.pop();
    cout<<pq.top()<<endl;//prints 3
    pq.emplace(2);//{1,2,3,7,9,10}
    cout<<pq.top()<<endl;//prints 2
}
void explainset(){
    set<int>s1;
    s1.insert(3);
    s1.insert(2);
    s1.insert(1);
    s1.insert(1);
    s1.insert(4);
    s1.insert(5);//{1,2,3,4,5}
    auto it1=s1.find(3);
    cout<<*(it1)<<endl;//prints 3
    it1=s1.find(6);
    cout<<*(it1)<<endl;//prints s1.end() after 5
    s1.erase(5);//erase 5 takes logarithmic time
    int cnt=s1.count(1);
    cout<<cnt<<endl;//returns 1;
    auto it2=s1.find(2);
    auto it3=s1.find(4);
    s1.erase(it2,it3);//{1,5}
    cout<<s1.size()<<endl;//returns 2 
}
void explainmultiset(){
    multiset<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(1);
    st.insert(4);//{1,1,1,2,3,4}
    cout<<st.size()<<endl;//prints 6
    //st.erase(1);//erase all ones
    //cout<<st.size()<<endl;//prints 3
    st.erase(st.find(1));//erase only one one
    cout<<st.size()<<endl;//prints 5
    st.erase(st.find(1),st.find(1));
}
int main()
{
    //explainstack();
    //explainqueue();
    //explainpriorityq();
    explainset();
    //explainmultiset();
    return 0;
}