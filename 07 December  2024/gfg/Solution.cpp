#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr, int low, int mid, int high){
        int left = low;
        int right = mid+1;
        vector<int> temp;
        
        int cnt = 0;
        while(left <= mid and right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                cnt += (mid - left + 1);
                right++;
            }
        }
        
        while(left <= mid){
            temp.push_back(arr[left++]);
        }
        while(right <= high){
            temp.push_back(arr[right++]);
        }
        
        for(int i=low; i<= high; i++){
            arr[i] = temp[i-low];
        }
        
        return cnt;
    }
    
    int mergeSort(vector<int>&arr, int left, int right){
        if(left >= right) return 0;
        
        int mid = (left + right)/2;
        
        int cnt = 0;
        cnt += mergeSort(arr, left, mid);
        cnt += mergeSort(arr, mid+1, right);
        cnt += merge(arr, left, mid, right);
        return cnt;
    }
    
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        return mergeSort(arr, 0, n-1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

