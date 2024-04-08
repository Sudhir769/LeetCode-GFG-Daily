#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;
    int solve(int i, int j, int a[], int b[])
    {
        if (i < 0 and j >= 0)
            return INT_MIN;
        if (j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int notTake = solve(i - 1, j, a, b);
        int take = a[i] * b[j] + solve(i - 1, j - 1, a, b);

        return dp[i][j] = max(take, notTake);
    }

    int maxDotProduct(int n, int m, int a[], int b[])
    {
        dp.resize(n + 1, vector<int>(m + 1, -1));
        return solve(n - 1, m - 1, a, b);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
