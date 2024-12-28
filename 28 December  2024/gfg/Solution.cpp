#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>> ans;
        
        int n = arr.size();
        
        for(int i = 0; i<n-1; i++) {
            
            int target = -arr[i];
            unordered_map<int, vector<int>> ind;
            
            for(int j = i+1; j<n; j++) {
                if(ind.find(target-arr[j]) != ind.end()){
                    for(int k: ind[target-arr[j]]) 
                        ans.push_back({i, min(j, k), max(j, k)});
                }
                ind[arr[j]].push_back(j);
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

