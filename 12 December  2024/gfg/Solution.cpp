#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int bSearch(vector<int> &arr, int start, int end, int target){
        int left = 0, cnt = 0, right = 0;
        
        if(start <= end){
            int mid = start + (end-start)/2;
            
            if(arr[mid] == target){
                cnt++;
            }
            left = bSearch(arr, start, mid-1, target);
            right = bSearch(arr, mid+1, end, target);
        }
        return left + cnt + right;
    }
    
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        
        int start = 0, end = n-1;
        return bSearch(arr, start, end, target);
    }
};


int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

