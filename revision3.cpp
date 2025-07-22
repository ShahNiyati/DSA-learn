#include<bits/stdc++.h>
using namespace std;
void printname(string s)
{
    cout<<"Hey "<<s<<endl;
}
int sum(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
void dosomething(int n)
{
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
void doingsomething(int &n)
{
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}
void changearr(int arr[],int n)
{
    arr[0]+=5;
    cout<<"value inside function :"<<arr[0]<<endl;
}
int main()
{
    //void function
    // string name;
    // cin>>name;
    // printname(name);

    //parameterised function
    // int n1,n2;
    // cin>>n1>>n2;
    // int result=sum(n1,n2);
    // cout<<result<<endl;

    //pass by value
    // int num;
    // cin>>num;
    // dosomething(num);
    // cout<<num<<endl;

    //pass by reference 
    int num;
    cin>>num;
    doingsomething(num);
    cout<<num<<endl;
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    changearr(arr,n);
     cout<<"value inside main :"<<arr[0]<<endl;
    return 0;
}