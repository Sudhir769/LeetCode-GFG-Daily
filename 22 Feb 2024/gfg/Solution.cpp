#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int mod = 1e9+7;
    vector<vector<int>>dp;
    int solve(int i, string s, int j, string t){
        if(j < 0) return 1;
        if(i < 0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == t[j]){
            return dp[i][j] = (solve(i-1, s, j-1, t) + solve(i-1, s, j, t)) % mod;
        }
        return dp[i][j] = (solve(i-1, s, j, t))%mod;
        
        
    }
    int subsequenceCount(string s, string t)
    {
        int n = s.length();
        int m = t.length();
        
        dp.resize(n+1, vector<int>(m+1, -1));
        return solve(n-1, s, m-1, t);
    }
};


int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

