#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCity(int n, int m, vector<vector<int>> &edges, int distanceThreshold)
    {
        vector<vector<pair<int, int>>> adj(n);
        vector<vector<int>> data(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < edges.size(); i++)
        {
            //  cout<<edges[i][0]<<" "<<edges[i][1]<<" "<<edges[i][2]<<endl;
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++)
        {
            data[i][i] = 0;
            pq.push({0, i});

            while (!pq.empty())
            {
                auto z = pq.top();
                pq.pop();

                int cost = z.first;
                int x = z.second;

                for (auto pp : adj[x])
                {
                    int cs = pp.second;
                    int y = pp.first;
                    // cout<<cs<<" "<<y<<endl;
                    if ((cost + cs) < data[i][y])
                    {
                        data[i][y] = cost + cs;
                        pq.push({data[i][y], y});
                    }
                }
            }
        }

        int ans = INT_MAX;
        int count = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int t = 0;
            for (int j = 0; j < n; j++)
            {
                if (data[i][j] != INT_MAX && data[i][j] <= distanceThreshold)
                    t++;
            }
            // cout<<endl;
            if (count >= t)
            {
                ans = i;
                count = t;
            }
        }
        return (ans);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
