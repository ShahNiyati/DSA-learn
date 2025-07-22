#include<bits/stdc++.h>
using namespace std;
//optimal sollution 
int LargestElement(vector<int>&arr,int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
    //TC->O(N)
    //SC->O(1)
}
int sLargest(vector<int>&arr ,int n){
    int large=arr[0];
    int sLarge=-1;//IF THERE ARE ANY NEGATIVE NUMBER IN THE ARRAY TAKE sLarge as INT_MIN
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            sLarge=large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>sLarge){
            sLarge=arr[i];
        }
    }
    return sLarge;
    //TC->O(N)
    //SC->O(1)
}
int sSmallest(vector<int>&arr,int n){
    int small=arr[0];
    int sSmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            sSmall=small;
            small=arr[i];
        }
        else if(arr[i]!=small && arr[i]<sSmall){
            sSmall=arr[i];
        }
    }
    return sSmall;
    //TC->O(N)
    //SC->O(1)
}
int issorted(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
    //TC->O(N)
}
int removeDuplicates(vector<int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
 
int main()
{
    int n;
    cout<<"Enter a size of an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(a[i]);
    }
    //find largest element
    int largest=LargestElement(arr,n);
    cout<<"Largest Element is : "<<largest<<endl;
    //find second largest and second smallest element 
    int secondLargest=sLargest(arr,n);
    int secondSmallest=sSmallest(arr,n);
    cout<<"Second smallest number is "<<secondSmallest<<" and Second largest number is "<<secondLargest<<endl;
    //check whether array is sorted or not 
    cout<<"Is array sorted : ";
    cout<<issorted(arr,n)<<endl;
    //Remove duplicates in-place from sorted array  
    int realnumbers=removeDuplicates(arr,n);
    cout<<"Real numbers in array : "<<realnumbers<<endl; 
    return 0;
}