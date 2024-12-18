#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int isPossible(vector<int>& arr, int n, int k, int mid) {
        int studentCount = 1;
        int currentSum = 0;
    
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                return 0; 
            }
            if (currentSum + arr[i] > mid) {
                studentCount++; 
                currentSum = arr[i];
                if (studentCount > k) {
                    return 0; 
                }
            } else {
                currentSum += arr[i];
            }
        }
        return 1;
    }
    
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        
        if (n < k) {
            return -1; 
        }
    
        int sum = 0;
        int max = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    
        int low = max;
        int high = sum;
        int result = -1;
    
        while (low <= high) {
            int mid = (low + high) / 2;
            if (isPossible(arr, n, k, mid)) {
                result = mid;
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

