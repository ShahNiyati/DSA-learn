#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int m = n;
    int count = 0;
    while(m!=0){
        m = m/10;
        count++;
    }
    cout<<count;
    return 0;
}