#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;

    int solve(int i, bool buy, int n, vector<int> &prices)
    {
        if (i >= n)
        {
            return 0;
        }
        if (dp[i][buy] != -1)
            return dp[i][buy];

        if (buy)
        {
            return dp[i][buy] = max(solve(i + 1, 0, n, prices) - prices[i], solve(i + 1, 1, n, prices));
        }

        return dp[i][buy] = max(solve(i + 1, 1, n, prices) + prices[i], solve(i + 1, 0, n, prices));
    }

    int maximumProfit(vector<int> &prices)
    {
        int n = prices.size();
        dp.resize(n + 1, vector<int>(2, -1));
        return solve(0, 1, n, prices);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

