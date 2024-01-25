#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>dp;
    int solve(string &s1, int n, string &s2, int m){
        if(n<0 or m<0){
            return 0;
        }
        if(dp[n][m] != -1) return dp[n][m];
        int result = 0;
        
        if(s1[n]==s2[m]){
            result += 1 + solve(s1, n-1, s2, m-1) ;
        }

        result = max(result, solve(s1, n-1, s2, m));
        result = max(result,solve(s1, n, s2, m-1));

        return dp[n][m] = result;
    }

    int longestCommonSubsequence(string text1, string text2) {
        // int n = text1.size();
        // int m = text2.size();
        // dp.resize(n+1, vector<int>(m+1, -1));
        // return solve(text1, n-1, text2, m-1);

        int n = text1.size();
        int m = text2.size();

        dp.resize(n+1, vector<int>(m+1, 0));

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){

                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
