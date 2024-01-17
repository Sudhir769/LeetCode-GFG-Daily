#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int>mp;

        for(auto i:arr){
            mp[i]++;
        }
        unordered_set<int>st;

        for(auto i:mp){
            if(st.count(i.second)==1){
                return false;
            }else{
                st.insert(i.second);
            }
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
