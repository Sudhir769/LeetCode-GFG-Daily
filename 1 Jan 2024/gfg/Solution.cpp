#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool canPair(vector<int> nums, int k) {
    
        int n=nums.size();
        if(n%2) return 0;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]%k]++;
            mp[k-(nums[i]%k)]++;
        }
        for(auto pr : mp)
        {
            if(pr.second%2) return 0;
        }
        return 1;
        
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

