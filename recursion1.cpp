#include<iostream>
using namespace std;
void printName(string s,int n){
    if(n==0){
        return;
    }
    cout<<s<<endl;
    printName(s,n-1);
}
void printOneToN(int i,int n){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    printOneToN(i+1,n);
}
void printNToOne(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printNToOne(n-1);
}
void printOneToNBackTracking(int i,int n){
    if(i<1){
        return;
    }
    printOneToNBackTracking(i-1,n);
    cout<<i<<endl;
}
void printNtoOneBackTracking(int i,int n){
    if(i==n+1){
        return;
    }
    printNtoOneBackTracking(i+1,n);
    cout<<i<<endl;
}
void printSumOfNByParameters(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printSumOfNByParameters(i-1,sum+i);
}
int printSumOfNByFunctional(int n){
    if(n==0){
        return 0;
    }
    return n+printSumOfNByFunctional(n-1);
}
int factorialOfN(int n){
  
    if(n==1){
        return 1;
    }
    return n*factorialOfN(n-1);
}
int main()
{
    // string name;
    // cout<<"enter you name : ";
    // cin>>name;
    int n;
    cout<<"enter how many times you want to print you name"<<endl;
    cin>>n;
    // printName(name,n);
    // printOneToN(1,n);
    // printNToOne(n);
    // printOneToNBackTracking(n,n);
    // printNtoOneBackTracking(1,n);

    printSumOfNByParameters(n,0);
    cout<<endl;
    cout<<printSumOfNByFunctional(n)<<endl;
    cout<<factorialOfN(n);

    return 0;
}