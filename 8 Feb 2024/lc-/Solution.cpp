#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dp;
    int solve(int n)
    {
        if (n == 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];

        int count = 1e7;
        for (int i = 1; i * i <= n; i++)
        {
            int result = 1 + solve(n - i * i);
            count = min(count, result);
        }
        return dp[n] = count;
    }

    int numSquares(int n)
    {
        // dp.resize(n+1, -1);
        // return solve(n);

        dp.resize(n + 1, 0);
        for (int i = 1; i * i <= n; i++)
        {
            dp[i * i] = 1;
        }

        for (int i = 1; i <= n; i++)
        {
            if (dp[i] == 1)
                continue;
            int root = sqrt(i), mn = INT_MAX;
            for (int j = 1; j <= root; j++)
            {
                mn = min(mn, dp[j * j] + dp[i - j * j]);
            }
            dp[i] = mn;
        }
        return dp[n];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
