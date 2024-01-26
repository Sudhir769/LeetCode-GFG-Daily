#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int delRow[4] = {-1, 0, 1, 0};
    int delCol[4] = {0, 1, 0, -1};
    vector<vector<vector<int>>>dp;
    int mod = 1e9+7;
    int solve(int col, int row, int moves, int m, int n){
        if(col < 0 or col >= m or row < 0 or row >= n) return 1;
        if(moves == 0) return 0;

        if(dp[col][row][moves] != -1) return dp[col][row][moves];
        int ans = 0;
        for(int ind=0; ind<4; ind++){
            int ncol = col + delCol[ind];
            int nrow = row + delRow[ind];

            ans = (ans + solve(ncol, nrow, moves-1, m, n)) % mod;
        }
        return dp[col][row][moves] = ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp.resize(m+1, vector<vector<int>>(n+1, vector<int>(maxMove+1, 0)));
        return solve(startRow, startColumn, maxMove, m, n);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
