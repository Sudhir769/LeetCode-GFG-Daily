#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    int t[71][71][71];
    int solve(vector<vector<int>> &grid, int row, int c1, int c2)
    {
        if (row >= n)
            return 0;

        if (t[row][c1][c2] != -1)
            return t[row][c1][c2];

        int cherry = grid[row][c1];
        if (c1 != c2)
        {
            cherry += grid[row][c2];
        }

        int ans = 0;
        for (int i = -1; i < 2; i++)
        {
            for (int j = -1; j < 2; j++)
            {

                int nrow = row + 1;
                int nc1 = c1 + i;
                int nc2 = c2 + j;

                if (nc1 >= 0 and nc1 < m and nc2 >= 0 and nc2 < m)
                {
                    ans = max(ans, solve(grid, nrow, nc1, nc2));
                }
            }
        }
        return t[row][c1][c2] = (cherry + ans);
    }

    int cherryPickup(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        memset(t, -1, sizeof(t));
        return solve(grid, 0, 0, m - 1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
