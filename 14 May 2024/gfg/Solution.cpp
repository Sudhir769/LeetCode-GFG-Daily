#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int MinimumEffort(int n, int m, vector<vector<int>> &heights)
    {
        priority_queue<pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
                greater<pair<int, pair<int, int>>>>pq;

        vector<vector<int>> dis(n, vector<int>(m, 1e9));
        dis[0][0] = 0;
        pq.push({0, {0, 0}});

        while (!pq.empty())
        {
            auto it = pq.top();
            pq.pop();

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            if (row == n - 1 and col == m - 1)
            {
                return diff;
            }

            for (auto dir : directions)
            {
                int nrow = row + dir[0];
                int ncol = col + dir[1];

                if (nrow >= 0 and ncol >= 0 and nrow < n and ncol < m)
                {
                    int ndiff = max(abs(heights[row][col] - heights[nrow][ncol]), diff);
                    if (dis[nrow][ncol] > ndiff)
                    {
                        dis[nrow][ncol] = ndiff;
                        pq.push({ndiff, {nrow, ncol}});
                    }
                }
            }
        }
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

