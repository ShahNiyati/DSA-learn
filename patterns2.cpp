#include<bits/stdc++.h>
using namespace std;
void pattern11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //nm
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int k=1;k<=(2*n)-(2*i);k++){
            cout<<" ";
        }
        //nm
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int start =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        char c=65;
        for(char j=65;j<=65+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        char c=65;
        for(char j=65;j<=65+(n-i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char c=65;
    for(int i=0;i<n;i++){
      
        for(char j=0;j<=i;j++)
        {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
void pattern17_a(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //latter
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int k=i-1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;   
    }
}
void pattern17_b(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        //latter
        for(char k=65;k<=(65+i);k++)
        {
            cout<<k;
        }
        //space 
        for(char k=(65+i)-1;k>=65;k--)
        {
            cout<<k;
        }
        cout<<endl;   
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++)
        {
            char ch=j+ (n-i-1);
            cout<<ch<<" ";
        }
        // for(char j='E'-i;j<='E';j++){
        //     cout<<j<<" ";
        // }
        cout<<endl;
    }
}
void pattern19_a(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern19_b(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<(2*(n-1))-(2*i);j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern20(int n){
    for(int i=1;i<=2*n;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        //star
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<(2*n)-(2*stars);j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            int num=(n-min(min(top,down),min(left,right)));
            cout<<num<<" ";
        }
    cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    //pattern11(n);
    //pattern12(n);
    //pattern13(n);
    //pattern14(n);
    //pattern15(n);
    //pattern16(n);
    //pattern17_a(n);
    //pattern17_b(n);
    //pattern18(n);
    // pattern19_a(n);
    // pattern19_b(n);
    //pattern 19 is combination of pattern 19_a and 19_b .
    //pattern20(n);
    //pattern21(n);
    //pattern22(n);
    
    return 0;
}