#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int l,int r){
    if(l>r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(arr,l+1,r-1);
}
void reverseArrayUsingOneVar(int arr[],int i,int n){
    if(i>n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArrayUsingOneVar(arr,i+1,n);
}
bool checkPalindrome(string s,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }else{
        return checkPalindrome(s,i+1,n);
    }
}
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
void subSequences(int ind,vector<int>&arr,vector<int>&ans,int n){
    if(ind >= n){
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]); //taken ith element
    subSequences(ind+1,arr,ans,n);
    ans.pop_back();//not taken ith element
    subSequences(ind+1,arr,ans,n);

}
void subSequencesWithSum(int ind,vector<int>&arr,vector<int>&ans2,int n,int s,int sum){
    if(ind == n){
        if(s==sum){
            for(auto it:ans2){
                cout<<it<<"";
            }
            cout<<endl;
        }
        return;
    }
    ans2.push_back(arr[ind]); //taken ith element
    s += arr[ind];
    subSequencesWithSum(ind+1,arr,ans2,n,s,sum);
    s -= arr[ind];
    ans2.pop_back();//not taken ith element
    subSequencesWithSum(ind+1,arr,ans2,n,s,sum);
}
int countSubSequencesWithSum(int ind,vector<int>&arr,int n,int s,int sum){
    if(ind == n){
        if(s==sum){
            return 1;
        }
        return 0;
    }
    s += arr[ind];
    int l = countSubSequencesWithSum(ind+1,arr,n,s,sum);
    s -= arr[ind];
    int r = countSubSequencesWithSum(ind+1,arr,n,s,sum);
    return l+r;
}
int main()
{
    // int n;
    // cout<<"Enter a size of an array :";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter an elements of an array :"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // // reverseArray(arr,0,n-1);
    // reverseArrayUsingOneVar(arr,0,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // string s;
    // cout<<"Enter a string you want to check that palindrom or not ";
    // cin>>s;
    // cout<<"String is palindrome ? "<<checkPalindrome(s,0,s.length());

    //multiple recursion calls
    // int m;
    // cout<<"Enter position of Fibonacci number : ";
    // cin>>m;
    // cout<<"Fibonacci number at position "<<m<<" is : "<<fibonacci(m);

    // vector<int> arr = {3,1,2};
    // int n = arr.size();
    // vector<int>ans;
    // subSequences(0,arr,ans,n);

    //subsequences with given sum k 
    vector<int>arr2 = {1,2,1};
    int n2 = arr2.size();
    vector<int>ans2;
    // subSequencesWithSum(0,arr2,ans2,n2,0,2);

    //count of subsequences whose sum is k 
    cout<<countSubSequencesWithSum(0,arr2,n2,0,2);

    return 0;
}