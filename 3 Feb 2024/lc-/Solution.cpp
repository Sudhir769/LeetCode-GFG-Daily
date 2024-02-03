#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<int>dp;
    int solve(int i, vector<int>& arr, int &k){
        if(i>=n) return 0;

        if(dp[i]  != -1) return dp[i];

        int result = 0;
        int currMax = -1;

        for(int j=i; j<n and j-i+1<=k; j++){
            currMax = max(currMax, arr[j]);
            result = max(result, ((j-i+1)*currMax  + solve(j+1, arr, k)));
        }
        return dp[i] = result;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        n = arr.size();
        // dp.resize(n+1, -1);
        // return solve(0, arr, k);


        dp.resize(n+1, 0);

        for(int size=1; size<=n; size++){
            int currMax = -1;
            for(int j=1; j<=k and size-j >= 0; j++){
                currMax = max(currMax, arr[size-j]);
                dp[size] = max(dp[size], (j*currMax) + dp[size-j]);
            }
        }
        return dp[n];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
