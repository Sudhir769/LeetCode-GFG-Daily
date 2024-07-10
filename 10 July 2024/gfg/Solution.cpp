#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &matrix, int &maxi, vector<vector<int>> &dp)
    {
        if (i >= matrix.size() or j >= matrix[0].size())
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        int right = solve(i, j + 1, matrix, maxi, dp);
        int diagonal = solve(i + 1, j + 1, matrix, maxi, dp);
        int down = solve(i + 1, j, matrix, maxi, dp);

        if (matrix[i][j] == 1)
        {
            dp[i][j] = 1 + min({right, down, diagonal});
            maxi = max(dp[i][j], maxi);
            return dp[i][j];
        }

        return dp[i][j] = 0;
    }

    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        int maxi = 0;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        // solve(0, 0, mat, maxi, dp);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                int right = dp[i][j + 1];
                int dia = dp[i + 1][j + 1];
                int down = dp[i + 1][j];

                if (mat[i][j] == 1)
                {
                    dp[i][j] = 1 + min({right, down, dia});
                    maxi = max(maxi, dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }

        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

