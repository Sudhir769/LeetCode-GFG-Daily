#include <bits/stdc++.h>
using namespace std;

class DSU{
    public:
    vector<int>parent;
    vector<int>rank;

    DSU(int n){
        parent.resize(n, 0);
        rank.resize(n, 0);

        for(int i=0; i<n; i++){
            parent[i] = i;
        }
    }

    int Find(int node){
        if(parent[node] == node){
            return node;
        }
        return parent[node] = Find(parent[node]);
    }

    void Reset(int node){
        parent[node] = node;
    }

    void Union(int a, int b){
        int apar = Find(a);
        int bpar = Find(b);

        if(apar != bpar){
            if(rank[apar] < rank[bpar]){
                parent[apar] = bpar;
            }else{
                parent[bpar] = apar;
            }
            rank[apar] += rank[apar] == rank[bpar] ? 1 : 0;
        }
    }
};

class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
        auto compare = [](const vector<int> &a, vector<int>&b){
            if(a[2] == b[2]){
                return a[0] < b[0];
            }else{
                return a[2] < b[2];
            }
        };

        sort(meetings.begin(), meetings.end(), compare);

        DSU dsu(n);
        dsu.Union(0, firstPerson);

        for(int i=0; i<meetings.size(); ){
            int ct = meetings[i][2];
            vector<int>curPeople;
            while(i < meetings.size() and meetings[i][2] == ct){
                dsu.Union(meetings[i][0], meetings[i][1]);
                curPeople.push_back(meetings[i][0]);
                curPeople.push_back(meetings[i][1]);
                i++;
            }
            for(auto pep: curPeople){
                if(dsu.Find(pep) != dsu.Find(0)){
                    dsu.Reset(pep);
                }
            }
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(dsu.Find(i) == dsu.Find(0)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
