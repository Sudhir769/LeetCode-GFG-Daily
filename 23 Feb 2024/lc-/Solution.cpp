#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it:flights){
            int start = it[0];
            int end = it[1];
            int cost = it[2];

            adj[start].push_back({end, cost});
        }
        vector<int>dist(n, 1e8);
        queue<pair<int, int>>q;
        q.push({src, 0});
        dist[src] = 0;
        int steps = 0;
        while(!q.empty() and steps <= k){
            int h = q.size();
            while(h--){
                auto it = q.front(); q.pop();
                int node = it.first;
                int cost = it.second;

                for(auto i:adj[node]){
                    int next = i.first;
                    int price = i.second;
                    if(dist[next] >= cost + price){
                        dist[next] = cost + price;
                        q.push({next, dist[next]});
                    }
                }
            }
            steps++;
        }
        // for(auto it:dist) cout<<it<<endl;
        if(dist[dst] != 1e8){
            return dist[dst];
        }
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
