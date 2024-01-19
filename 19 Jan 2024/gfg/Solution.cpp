#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int k) {
        unordered_map<int,int> mp;
        set<pair<int, int>>st;
        vector<vector<int>>ans;
        
        for(int i=0; i<N; i++){
            vector<int>res;
            if(mp[arr[i]] > 0){
                st.erase({-mp[arr[i]], arr[i]});
            }
            mp[arr[i]]++;
            st.insert({-mp[arr[i]], arr[i]});
            
            int t=0;
            for(auto j:st){
                if(t>=k){
                    break;
                }
                res.push_back(j.second);
                ++t;
            }
            ans.push_back(res);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

