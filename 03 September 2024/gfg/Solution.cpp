#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    vector<vector<int>> dp;
    int solve(int i, int j, string &s1, string &s2)
    {
        if (i < 0 or j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        if (s1[i] == s2[j])
        {
            return dp[i][j] = 1 + solve(i - 1, j - 1, s1, s2);
        }

        return dp[i][j] = max(solve(i - 1, j, s1, s2), solve(i, j - 1, s1, s2));
    }

    int minOperations(string str1, string str2)
    {
        n = str1.size();
        m = str2.size();
        dp.resize(n + 1, vector<int>(m + 1, -1));

        return n + m - 2 * solve(n - 1, m - 1, str1, str2);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

