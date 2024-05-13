#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    void dfs(int n, vector<int> adj[], vector<bool> &vi, unordered_set<int> &st)
    {
        vi[n] = true;
        st.insert(n);
        for (int i : adj[n])
        {
            if (!vi[i])
            {
                dfs(i, adj, vi, st);
            }
        }
    }

    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges)
    {
        vector<int> adj[v + 1];
        for (auto i : edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        int cnt = 0;
        vector<bool> visited(v + 1, 0);
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i])
            {
                unordered_set<int> st;
                dfs(i, adj, visited, st);
                bool f = 1;
                for (int n : st)
                {
                    if (adj[n].size() != st.size() - 1)
                    {
                        f = 0;
                        break;
                    }
                }
                if (f)
                    cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

