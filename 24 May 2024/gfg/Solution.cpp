#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mod = 1e9 + 7;
    int findWays(int ind, vector<int> &arr, int target, int n, vector<vector<int>> &dp)
    {
        if (target < 0)
            return 0;

        if (ind == n)
        {
            return target == 0 ? 1 : 0;
        }

        if (dp[ind][target] != -1)
            return dp[ind][target];

        return dp[ind][target] = (findWays(ind + 1, arr, target, n, dp) + findWays(ind + 1, arr, target - arr[ind], n, dp)) % mod;
    }
    int countPartitions(int n, int d, vector<int> &arr)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
            total += arr[i];

        if (total - d < 0 or (total - d) % 2)
            return 0;

        vector<vector<int>> dp(n, vector<int>((total - d) / 2 + 1, -1));

        return findWays(0, arr, (total - d) / 2, n, dp);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

