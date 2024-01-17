#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    set<vector<int>>st;
    void solve(int ind, vector<int>&arr, int n){
        if(ind == n){
            st.insert(arr);
            return;
        }
        
        for(int i=ind; i<n; i++){
            swap(arr[ind], arr[i]);
            solve(ind+1, arr, n);
            swap(arr[ind], arr[i]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>>ans;
        solve(0, arr, n);
        for(auto j:st){
            ans.push_back(j);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

