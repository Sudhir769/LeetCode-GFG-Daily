#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        //User function Template for C++
        int n;
        vector<vector<vector<int>>>dp;
        int solve(int ind, int buy, vector<int>&price, int times){
            if(ind >= n or(times == 0 and buy)){
                return 0;
            }    
            
            if(dp[ind][buy][times] != -1) return dp[ind][buy][times];
            
            if(buy){
                return dp[ind][buy][times] = max(solve(ind+1, 1, price, times), -price[ind] + solve(ind+1, 0, price, times-1));
            }else{
                return dp[ind][buy][times] = max(solve(ind+1, 0, price, times), price[ind] + solve(ind+1, 1, price, times));
            }
            
        }
        
        int maxProfit(vector<int>&price){
            n = price.size();
            dp.resize(n+1, vector<vector<int>>(3, vector<int>(3, -1)));
            return solve(0, 1, price, 2);
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

