#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int smallest=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[smallest]){
                smallest=j;
            }   
        }
        int temp;
        temp=a[smallest];
        a[smallest]=a[i];
        a[i]=temp;
    }
}
void bubblesort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void insertionsort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp;
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
void mergeing(vector<int> &arr,int l,int m,int h){
    int i=l;
    int j=m+1;
    int L=0;
    vector<int> temp;
    while(i<=m && j<= h){
        if(arr[i]<=arr[j])
        {
            // temp[L]=arr[i];
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++; 
        }
    }
    if(i>m){
        while(j<=h){
        temp.push_back(arr[j]);
        j++;
        }
    } 
    else{
        while(i<=m){
        temp.push_back(arr[i]);
        i++;  
        } 
    }
    for(int i=l;i<=h ;i++){
        arr[i]=temp[i-l];
    } 
    
}
void mergsort(vector<int> &arr,int l,int h){
    if(l>=h){
        return; 
    }
    int mid=    (l+h)/2;
    mergsort(arr,l,mid);
    mergsort(arr,mid+1,h);
    mergeing(arr,l,mid,h);
} 
int partition(vector<int> &arr,int l,int h){
    int i=l;
    int j=h;
    int pivot=arr[l];
    while(i<j){
        while(arr[i]<=pivot && i<h){
            i++;
        }
        while(arr[j]>pivot&& j>=l+1){
            j--; 
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }  
    }
    swap(arr[l],arr[j]);
    return j; 
}
void quicksort(vector<int> &arr,int l,int h){
    if(l<h)//because if l==h 1 element is there and 1 element is already sorted 
    { 
        int partition_index;
        partition_index=partition(arr,l,h);
        quicksort(arr,l,partition_index-1);
        quicksort(arr,partition_index+1,h);
    }
}
int main() 
{
    int n;
    cout<<"Enter a size of an array : ";
    cin>>n;
    vector<int>arr;
    int a[n];
    cout<<"Enter the element of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        arr.push_back(a[i]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //selectionsort(a,n);
    //bubblesort(a,n);
    //insertionsort(a,n);
    //mergsort(arr,0,arr.size()-1);
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 