#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    void dfs(int i, vector<int>&vis, vector<int>adjList[]){
        vis[i] = 1;
        
        for(auto j:adjList[i]){
            if(!vis[j]){
                dfs(j, vis, adjList);
            }
        }
    }
    
    int isTree(int n, int m, vector<vector<int>> &adj) {
        vector<int>adjList[n];
        
        for(auto i:adj){
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }
        
        vector<int>vis(n, 0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i, vis, adjList);
            }
        }
        if(cnt > 1) return 0;
        return n-1 == m;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

