#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<string> ans;
    void solve(int i, int j, string path, vector<vector<int>> &mat, int n)
    {
        if (i < 0 or i >= n or j < 0 or j >= n or mat[i][j] == 0)
        {
            return;
        }
        if (i == n - 1 and j == n - 1)
        {
            ans.push_back(path);
            return;
        }
        mat[i][j] = 0;

        solve(i - 1, j, path + 'U', mat, n);
        solve(i + 1, j, path + 'D', mat, n);
        solve(i, j + 1, path + 'R', mat, n);
        solve(i, j - 1, path + 'L', mat, n);

        mat[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat)
    {
        int n = mat.size();

        string path = "";
        solve(0, 0, path, mat, n);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

