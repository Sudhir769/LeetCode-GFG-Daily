#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>>dp;
    int solve(int m, int n){
        if(n==0) return 1;
        if(m==0) return 0;
        
        if(dp[m][n] != -1) return dp[m][n];
        
        dp[m][n] = solve(m/2, n-1) + solve(m-1, n);
        
        return dp[m][n];
    }
    int numberSequence(int m, int n){
        // dp.resize(m+1, vector<int>(n+1, -1));
        // return solve(m, n);
        
        vector<vector<int>>dp(n, vector<int>(m+1, 0));
        for(int i=1; i<=m; i++) dp[n-1][i] = 1;
        
        for(int i=n-2; i>=0; i--){
            for(int j=1; j<=m; j++){
                for(int k = 2*j; k<=m; k++){
                    dp[i][j] += dp[i+1][k];
                }
            }
        }
        return accumulate(dp[0].begin(), dp[0].end(), 0);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

