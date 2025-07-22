#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*data types : int - 2^9 , long int-2^12 , long long int - 2^18
                   //float ,double ,long double 
                   //string ,char
     string s;
     getline(cin,s);
     cout<<s;*/
    
    //if else statement :
    // int marks;
    // cout<<"Enter your marks : ";
    // cin>>marks;
    // if(marks<25)
    // {
    //     cout<<"F";
    // }
    // else if(marks<=44)
    // {
    //     cout<<"E";
    // }
    // else if(marks<=49)
    // {
    //     cout<<"D";
    // }
    // else if(marks<=59)
    // {
    //     cout<<"C";
    // }
    // else if(marks<=69)
    // {
    //     cout<<"B";
    // }
    // else if(marks<=100)
    // {
    //     cout<<"A";
    // }
    
    //nested if else :
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for JOB! "<<endl;
    }
    else if (age<=57)
    {
        cout<<"Eligible for JOB! "<<endl;
        if(age>=55 )
        {
            cout<<"Retirement soon."<<endl;
        }
    }
    else
    {
        cout<<"Retirement time "<<endl;
    }
    return 0;
}