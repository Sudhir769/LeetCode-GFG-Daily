#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>>dp;
    int solve(int ind, int n, int total, vector<int>&cost){
        if(ind >= n)  return 0;
        
        if(dp[ind][total] != -1) return dp[ind][total];
        
        int notTake = solve(ind+1, n, total, cost);
        int take = 0;
        if(total >= cost[ind]){
            take = 1 + solve(ind+1, n, total - cost[ind] + (0.9)*cost[ind], cost);
        }
        return dp[ind][total] = max(take, notTake);
    }
    
    int max_courses(int n, int total, vector<int> &cost)
    {
        dp.resize(n+1, vector<int>(total+1, -1));
        return solve(0, n, total, cost);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

