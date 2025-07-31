#include<bits/stdc++.h>
using namespace std;
//bruit force 0(n^2);
int maximumSubarray(vector<int> &arr , int n){
    int maxi = INT_MIN;
    int sum =0;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j = i; j<=n ;j++){
            sum += arr[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}

//optimal approach -->using mergesort approach -> o(nlogn)
int calculate(vector<int> &arr, int low, int mid, int high) {
    int sum1 = 0;
    int maxi_left = INT_MIN;
    int maxi_right = INT_MIN;

    // Max sum from mid to low (left side)
    for (int i = mid; i >= low; i--) {
        sum1 += arr[i];
        maxi_left = max(sum1, maxi_left);
    }

    sum1 = 0;
    // Max sum from mid+1 to high (right side)
    for (int i = mid + 1; i <= high; i++) {
        sum1 += arr[i];
        maxi_right = max(sum1, maxi_right);
    }

    return max({maxi_left, maxi_right, maxi_left + maxi_right});
}

int maxiSubarray(vector<int> &arr, int low, int high) {
    if (low == high) return arr[low]; // base case
    int mid = (low + high) / 2;

    return max({
        maxiSubarray(arr, low, mid),
        maxiSubarray(arr, mid + 1, high),
        calculate(arr, low, mid, high)
    });
}

int maxiSub(vector<int>&arr){
    int maxisum = arr[0];
    int currsum = arr[0];
    for(int i=1;i<arr.size();i++){
        currsum = max(arr[i],currsum+arr[i]);
        maxisum = max(maxisum,currsum);
    }
    return maxisum;
}
int main() {
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = maxiSubarray(arr, 0, n - 1);
    cout << "Maximum subarray sum: " << maxi << endl;

    return 0;
}
