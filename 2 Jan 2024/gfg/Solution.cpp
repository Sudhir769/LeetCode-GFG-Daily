#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        vector<long long>dp(n+1, 0);
        
        for(int i=n-1; i>=0; i--){
            dp[i] = a[i] + dp[i+1];
            dp[i] = max(dp[i], 0LL);
        }
        
        long long ans = -1e18;
        
        long long currSum = 0;
        for(int i = 0; i < k; i++){
            currSum += a[i];
        }
        for(int i=k; i<n; i++){
            long long sum = currSum + dp[i];
            ans = max(ans, sum);
            currSum += a[i];
            currSum -=a[i-k];
        }
        return max(ans, currSum);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

