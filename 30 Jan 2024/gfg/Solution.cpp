#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        vector<vector<vector<int>>>dp;
        int solve(int i, int j, int k, string &a, string &b, string &c){
            if(i >= a.length() or j >= b.length() or k >= c.length()){
                return 0;
            }
            
            if(dp[i][j][k] != -1){
                return dp[i][j][k];
            }
            
            if(a[i]==b[j] and b[j]==c[k]){
                return dp[i][j][k] = 1 + solve(i+1, j+1, k+1, a, b, c);
            }
            
            return dp[i][j][k] = max(solve(i+1, j, k, a, b, c), max(solve(i, j+1, k, a, b, c), solve(i, j, k+1, a, b, c)));
        }
        
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            dp.resize(n1+1, vector<vector<int>>(n2+1, vector<int>(n3+1, -1)));
            return solve(0, 0, 0, A, B, C);
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

