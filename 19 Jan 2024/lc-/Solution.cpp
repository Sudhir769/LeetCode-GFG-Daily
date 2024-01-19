#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>>dp;
    int solve(int row, int col, vector<vector<int>>& matrix, int n){
        if(row==n-1) return matrix[row][col];

        if(dp[row][col] != -1){
            return dp[row][col];
        }

        int ans = INT_MAX;
        if(col > 0 ){
            ans = min(ans, matrix[row][col] + solve(row+1, col-1, matrix, n));
        }
        if(col < n-1 ){
            ans = min(ans, matrix[row][col] + solve(row+1, col+1, matrix, n));
        }
        ans = min(ans, matrix[row][col] + solve(row+1, col, matrix, n));
        return dp[row][col] = ans;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        // int n = matrix.size();
        // dp.resize(n+1, vector<int>(n+1, -1));

        // int result = INT_MAX;
        // for(int c=0; c<n; c++){
        //     result = min(result, solve(0, c, matrix, n));
        // }
        // return result;


        // TABULATION 
        int n = matrix.size();
        vector<int>curr(n, 0), prev(n, 0);

        for(int i=0;i<n; i++){
            prev[i] = matrix[0][i];
        }

        for(int row = 1; row < n; row++){
            for(int col = 0; col < n; col++){
                int ans = prev[col];
                if(col > 0){
                    ans = min(ans, prev[col-1]);
                }
                if(col < n-1){
                    ans = min(ans, prev[col+1]);
                }
                curr[col] = ans + matrix[row][col];
            }
            prev = curr;
        }
        return *min_element(prev.begin(), prev.end());
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
