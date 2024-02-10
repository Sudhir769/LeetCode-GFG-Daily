#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long solve(int i, int j, int k, vector<vector<int>> &arr, vector<vector<vector<long long>>> &dp)
    {
        if (i < 0 or j < 0 or k < 0)
            return 0;
        if (i == 0 and j == 0)
        {
            if (arr[i][j] == k)
            {
                return 1;
            }
            return 0;
        }
        if (dp[i][j][k] != -1)
            return dp[i][j][k];
        long long left = 0, up = 0;
        if (i >= 0)
        {
            left = solve(i - 1, j, k - arr[i][j], arr, dp);
        }
        if (j >= 0)
        {
            up = solve(i, j - 1, k - arr[i][j], arr, dp);
        }
        return dp[i][j][k] = (up + left);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr)
    {
        vector<vector<vector<long long>>> dp(n + 1, vector<vector<long long>>(n + 1, vector<long long>(k + 1, -1)));
        return solve(n - 1, n - 1, k, arr, dp);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

