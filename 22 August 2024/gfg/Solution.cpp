#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topoSort(int n, vector<int> adj[])
    {
        vector<int> indegree(n, 0);

        for (int i = 0; i < n; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        return topo;
    }
    string findOrder(string dict[], int n, int k)
    {
        vector<int> adj[k];
        for (int i = 0; i < n - 1; i++)
        {
            string s1 = dict[i];
            string s2 = dict[i + 1];

            int len = min(s1.length(), s2.length());
            for (int j = 0; j < len; j++)
            {
                if (s1[j] != s2[j])
                {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
            }
        }
        vector<int> topo = topoSort(k, adj);
        string ans = "";
        for (auto it : topo)
        {
            ans = ans + char(it + 'a');
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

