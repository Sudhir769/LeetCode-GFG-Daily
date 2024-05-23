#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> dp;
    int fun(string &s, int i, int j)
    {
        if (i >= j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s[i] != s[j])
        {
            dp[i][j] = 1 + min(fun(s, i, j - 1), fun(s, i + 1, j));
        }
        else
            dp[i][j] = fun(s, i + 1, j - 1);
        return dp[i][j];
    }
    int kPalindrome(string str, int n, int k)
    {
        dp.resize(n, vector<int>(n, -1));
        return fun(str, 0, n - 1) <= k;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

