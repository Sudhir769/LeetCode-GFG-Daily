#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int>ans;
        vector<int> adj[n];
        int in[n] = {0};
        
        for(auto i:prerequisites){
            adj[i[1]].push_back(i[0]);
            in[i[0]]++;
        }
        
        queue<int>q;
        for(int i=0; i<n; i++){
            if(in[i] == 0){
                q.push(i);
                ans.push_back(i);
            }
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto j:adj[node]){
                in[j]--;
                if(in[j] == 0){
                    q.push(j);
                    ans.push_back(j);
                }
            }
        }
        if(ans.size() < n) ans.clear();
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

