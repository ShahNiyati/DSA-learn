#include<bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int>&arr,int endIdx){
    if(endIdx == 0){
        return arr;
    }
    for(int i=0;i<endIdx;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return bubbleSort(arr,endIdx-1);
}
vector<int> selectionSort(vector<int>&arr,int beginIdx,int size){
    if(beginIdx == size-1){
        return arr;
    }
    int minIdx = beginIdx;
    for(int i = beginIdx;i<size;i++){
        if(arr[i] < arr[minIdx]){
            minIdx = i;
        }
    }
    swap(arr[beginIdx],arr[minIdx]);
    return selectionSort(arr,beginIdx+1,size);
}
vector<int> insertionSort(vector<int>&arr,int n){
    if(n<=1){
        return arr;
    }
    arr =  insertionSort(arr,n-1);
    int last = arr[n-1];
    int j = n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1]=last;
    return arr;
}
int main()
{
    vector<int> arr = {3,2,5,4,1,0};
    int n = arr.size();
    // arr = bubbleSort(arr,n-1);
    // arr = selectionSort(arr,0,n);
    arr = insertionSort(arr,n);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}