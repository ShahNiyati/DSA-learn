#include<bits/stdc++.h>
using namespace std;
void countdigit(int n){
    //method 1
    // int count=0;
    // while(n>0){
       
    //     n=n/10;
    //     count++;
    // }
    //cout<<"number of digits is : "<<count<<endl;
    //method 2
    int digit = (int)(log10(n)+1);
    cout<<"number of digits is : "<<digit<<endl;
}
void reversenum(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
         sum=(sum*10)+lastdigit;
        n=n/10;
    }
    cout<<sum<<endl;
}
void palindrome(int n){
    int m=n;
    int sum=0;
    while(m>0){
        int last=m%10;
        sum=(sum*10)+last;
        m=m/10;
    }
    if(sum==n){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"the number is not a palindrome"<<endl ;
    }
}
void armstrong(int n){
    int sum=0;
    int m=n;
    int last;
    while(m>0){
        last=m%10;
        sum=sum+(last*last*last);
        m=m/10;
    }
    if(sum==n){
        cout<<"This is a armstrong number "<<endl;
    }
    else{
        cout<<"This is not a armstrong number "<<endl;
    }
}
void printalldiv(int n){
    cout<<"all divisor of "<<n<<" is : "<<endl;
    //method 1
    // for(int i=1;i<=n);i++){
    //     if(n%i==0){
    //         cout<<i<<" ";//TC-> O(N)
    //     }
    // }
    //method 2

     vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
       
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
               ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;
}
void checkprime(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
        }
        if((n/i)!=i){
            cnt++; 
        }
    }
    if(cnt==2){
        cout<<n<<" is a prime number "<<endl;
    }
    else{
        cout<<n<<" is not a prime number "<<endl; 
    }
}
void countGCDandHCF(int n1 ,int n2){
    //find GCD
    //method 1
   int gcd=1;
    // for(int i=1;i<=min(n1,n2);i++){
    //     if(n1%i==0 &&  n%i==0){
    //         gcd=i;
    //     }
    // }
    //cout<<"GCD is : "<<gcd<<endl;
    //method 2
    while(n1>0 && n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        cout<<"GCD is : "<<n2<<endl;
    }
    else{
        cout<<"GCD is : "<<n1<<endl;
    }
    //find lcm
    int lcm;
    int max=(n1>n2)?n1:n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            lcm=max;
            break;
        }
        max++;
    }
    cout<<"LCM is : "<<lcm;
}
void countLCM(int n1,int n2){
    int lcm;
    int max=(n1>n2)?n1:n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            lcm=max;
            break;
        }
        max++;
    }
    cout<<"LCM is : "<<lcm<<endl;
}
int main()
{
    int n,n2; 
    cout<<"Enter a number : ";
    cin>>n;
    //countdigit(n);
    //reversenum(n);
    //palindrome(n);
    //armstrong(n);
    //printalldiv(n);
    //checkprime(n);
    cout<<"Enter a second number : ";
    cin>>n2;
    //countGCDandHCF(n,n2);
    countLCM(n,n2);
    return 0;
}