#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findMaxSum(int n, int m, vector<vector<int>> mat)
    {
        if (m <= 2 or n <= 2)
        {
            return -1;
        }
        int ans = INT_MIN;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = 0; j < m - 2; j++)
            {
                int sum = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + mat[i + 1][j + 1] + mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

