#include<bits/stdc++.h>
using namespace std;
int cnt=0;
//Stack overflow-because you didnt put base condition in it
void func1(){
    cout<<"1"<<endl;
    func1();
}
//recursion with base condition
void func2(){
    if(cnt==5){
        return;
    }
    else{
        cout<<cnt<<endl;
        cnt++;
        func2();
    }
}
void printname(int i,int n){
    if(i>n){
        return ;
    }
    else{
        cout<<"Niyati Shah"<<endl;
        printname(i+1,n);
    }
}
void printnum(int i,int n){
    if(i>n){
        return ;
    }
    else{
        cout<<i<<" ";
        printnum(i+1,n);
    }
}
void printreverse(int i,int n){
    if(i<1){
        return ;
    }
    else{
        cout<<i<<" ";
        printreverse(i-1,n);
    }
}
void printnumbt(int i,int n){
    if(i<1){
        return;
    }
    else{
        printnumbt(i-1,n);
        cout<<i<<" ";
    }
}
void printreversebt(int i,int n){
    if(i>n){
        return;
    }
    else{
        printreversebt(i+1,n); 
        cout<<i<<" ";
    }
}
void printsumparameter(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    else{
        printsumparameter(i-1,sum+i);
    }
}
int printsumfunction(int n){
    int sum;
    if(n==0){
        return 0;
    }
    else{
        return n+printsumfunction(n-1);
    }
}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void reversearray(int i,int arr[],int n){
    if(i>=n/2){
        return ;
    }
    else{
        swap(arr[i],arr[n-i-1]);
        reversearray(i+1,arr, n); 
    }
}
bool checkpelindrome(int i,string s){
    if(i>=s.length()/2){
        return true; 
    }
    if(s[i]!=s[s.length()-i-1]){
        return false ;
    }
    else{
       return checkpelindrome(i+1,s);
    }
    
}
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    //func1();
    //func2();
    //exercise 1 
        // cout<<"Enter a number how many times you want to print your name : "<<endl;
        // cin>>n;
        // printname(1,n);
    //exercise 2
        // cout<<"Enter a number you want to print integer : "<<endl;
        // cin>>n;
        // printnum(1,n);
    //exercise 3
        // cout<<"Enter a number you want to print in reverse order till 1 : "<<endl;
        // cin>>n;
        // printreverse(n,n);
    //exercise 4 - backtracking 
        // cout<<"Enter a number you want to print integer : "<<endl;
        // cin>>n;
        // printnumbt(n,n);
    //exercise - backtracing
        // cout<<"Enter a number you want to print in reverse order till 1 : "<<endl;
        // cin>>n;
        // printreversebt(1,n);
    //exercise 5-sum of N numbers
        // cout<<"Enter a number you want to sum of 1 to N : "<<endl;
        // cin>>n;
        // printsumparamete r(n,0);
        // cout<<printsumfunction(n)<<endl;
    //exercise 6-factorial of N numbers
        // cout<<"Enter a number you want to factorial : "<<endl;
        // cin>>n;
        // cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;       
    //exercise 7-Reverse an array 
        // cout<<"Enter an array you want to reverse it : "<<endl;
        // cin>>n;
        // int a[n];
        // cout<<"Enter an element :"<<endl;
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        // reversearray(0,a,n);
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
    //exercise 8-check pelindrome 
        // cout<<"Enter a String you want to check if it is palindrome or not : ";
        // string s;
        // cin>>s;
        // bool a=checkpelindrome(0,s);
        // if(a==1){
        //     cout<<"String is palindrome"<<endl;
        // }
        // else{
        //     cout<<"String is not a palindrome"<<endl;
        // }
    //check 9-fibonacci series 
        cout<<"Enter a position you want to factorial number on that position: "<<endl;
        cin>>n;
        cout<<"Fibonacci number on "<<n<<"th term is "<<fibonacci(n)<<endl;

         

    return 0;
}