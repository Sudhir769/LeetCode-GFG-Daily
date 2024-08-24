#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.
    int solve(int i, vector<int> &wt, vector<int> &val, int W)
    {
        if (i < 0)
        {
            return 0;
        }

        int notTake = solve(i - 1, wt, val, W);
        int take = 0;

        if (W >= wt[i])
        {
            take = val[i] + solve(i - 1, wt, val, W - wt[i]);
        }

        return max(notTake, take);
    }
    int knapSack(int W, vector<int> &wt, vector<int> &val)
    {
        int n = wt.size();

        int dp[n][W + 1];
        memset(dp, 0, sizeof dp);

        for (int w = wt[0]; w < W; w++)
        {
            dp[0][w] = val[0];
        }

        for (int ind = 1; ind <= n; ind++)
        {
            for (int w = 0; w <= W; w++)
            {
                int notTake = dp[ind - 1][w];
                int take = INT_MIN;
                if (wt[ind] <= w)
                    take = dp[ind - 1][w - wt[ind]];

                dp[ind][w] = max(take, notTake);
            }
        }
        dp[n - 1][W];
    }
};
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

