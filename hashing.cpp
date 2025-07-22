#include<bits/stdc++.h>
using namespace std;

int main()
{
    //**//hashing of numbers : 

    // int n;
    // cout<<"Enter a size of an array :"<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter an elements : "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // //precompute 
    // int hash[1000000]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // int q;
    // cout<<"Enter a number of querry : ";
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     //fetch
    //     cout<<hash[number]<<endl;
    // }

    //**//hashing of characters : 

    // string s;
    // cout<<"Enter a string : ";
    // cin>>s;
    // int hash[256]={0};
    // for(int i=0;i<s.length();i++){
    //     hash[s[i]]+=1;
    // }
    // cout<<"Enter a number of querries : ";
    // int q;
    // cin>>q;
    // cout<<"Enter a querries :  "<<endl;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     //fetch
    //     cout<<hash[c]<<endl;
    // }

    //**//solution of hashing in numbers 

    // int n;
    // cout<<"Enter size of an array : "<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter elements :"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // //precompute
    // unordered_map<int,int>mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }
    // //iterate in the array 
    // for(auto it : mpp){
    //     cout<<it.first<<" - "<<it.second<<endl;
    // }
    // int q;
    // cout<<"Enter a number of querry :";
    // cin>>q;
    // cout<<"Enter querry : ";
    // while(q--){
    //     int num;
    //     cin>>num;
        
    //     //fetch
    //     cout<<mpp[num]<<endl;
    // }

    //**// highest and lowest frequency numbers :

    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxfre=INT_MIN;
    int minfre=INT_MAX;
    int maxnum= -1;
    int minnum= -1;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int max=0;
    int min;
    for(auto it : mpp){
        if(it.second>maxfre){
            maxnum=it.first;
            maxfre=it.second;
        }
        if(it.second<minfre){
            minnum=it.first;
            minfre=it.second;
        }
    }
    pair<int,int> p={maxnum,minnum};
    cout<<"Number with Maximum frequency :"<<p.first<<endl;
    cout<<"Number with Minimum frequency of : "<<p.second<<endl;

    return 0;
}