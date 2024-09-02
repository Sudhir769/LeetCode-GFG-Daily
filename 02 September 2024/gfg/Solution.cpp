#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumCostPath(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<int>> cost(n, vector<int>(n, 1e9));
        cost[0][0] = grid[0][0];

        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        pq.push({cost[0][0], {0, 0}});

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        while (!pq.empty())
        {
            int cst = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();

            for (int ind = 0; ind < 4; ind++)
            {
                int nrow = row + delRow[ind];
                int ncol = col + delCol[ind];

                if (nrow < 0 or nrow >= n or ncol < 0 or ncol >= n)
                    continue;

                if (cost[nrow][ncol] > cst + grid[nrow][ncol])
                {
                    cost[nrow][ncol] = cst + grid[nrow][ncol];
                    pq.push({cost[nrow][ncol], {nrow, ncol}});
                }
            }
        }
        return cost[n - 1][n - 1];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

