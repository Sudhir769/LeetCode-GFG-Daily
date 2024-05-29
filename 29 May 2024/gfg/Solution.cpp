#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> dp;
    int solve(int n, int x, int y)
    {
        if (n <= 1)
        {
            return n;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }

        int ans = 1;
        if (n >= x)
        {
            ans &= solve(n - x, x, y);
        }
        if (n >= y)
        {
            ans &= solve(n - y, x, y);
        }

        ans &= solve(n - 1, x, y);

        return dp[n] = ans ^ 1;
    }

    int findWinner(int n, int x, int y)
    {
        dp.resize(n + 1, -1);
        return solve(n, x, y);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

