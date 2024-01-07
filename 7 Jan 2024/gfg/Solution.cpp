#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int arr[], int mid, int n){
        int parts = 1;
        long long sum = 0;
        
        for(int i=0; i<n; i++){
            if(sum + arr[i] <= mid){
                sum += arr[i];
            }else{
                parts++;
                sum = arr[i];
            }
        }
        return parts;
    }
    
    int splitArray(int arr[] ,int N, int K) {
        
        int low = *max_element(arr, arr + N);
        int high = accumulate(arr, arr + N, 0);
        
        while(low <= high){
            int mid = (low + high)/2;
            int partitions = solve(arr, mid, N);
            if(partitions > K){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

