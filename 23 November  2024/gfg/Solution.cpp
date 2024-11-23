#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int diff = arr[n-1] - arr[0];
        
        for(int i=1; i<n; i++){
            int maxi = max(arr[i-1] + k, arr[n-1]-k);
            int mini = min(arr[0]+k, arr[i] - k);
            
            diff = min(diff, maxi - mini);
        }
        return diff;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

