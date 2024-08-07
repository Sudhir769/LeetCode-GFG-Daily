#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int solve(string &x, string &y, int costX, int costY, int i, int j)
    {

        int n = x.length();
        int m = y.length();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {

                if (x[i - 1] == y[j - 1])
                {

                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[n][m];
    }

    int findMinCost(string x, string y, int costX, int costY)
    {

        int commonlength = solve(x, y, costX, costY, 0, 0);

        return (x.size() - commonlength) * costX + (y.size() - commonlength) * costY;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

