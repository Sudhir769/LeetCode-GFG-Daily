#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mod = 1e9 + 7;
    vector<vector<int>> dp;
    int solve(int i, int j, string &s1, string &s2)
    {
        if (j < 0)
        {
            return 1;
        }
        if (i < 0)
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (s1[i] == s2[j])
        {
            return dp[i][j] = (solve(i - 1, j - 1, s1, s2) % mod + solve(i - 1, j, s1, s2) % mod) % mod;
        }
        return dp[i][j] = solve(i - 1, j, s1, s2) % mod;
    }
    int countWays(string s1, string s2)
    {
        int n = s1.length();
        int m = s2.length();

        dp.resize(n + 1, vector<int>(m + 1, -1));
        return solve(n - 1, m - 1, s1, s2);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

