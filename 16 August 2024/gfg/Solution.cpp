#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    vector<int>dp;
    int solve(int n, int x, int y, int z){
        if(n < 0) return INT_MIN;
        if(n == 0) return 0;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = 1 + max({solve(n-x, x, y, z),
            solve(n-y, x, y, z),
                solve(n-z, x, y, z)});
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {   
        dp.resize(n+1, -1);
        int ans = solve(n, x, y, z);
        return ans < 0 ? 0: ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

