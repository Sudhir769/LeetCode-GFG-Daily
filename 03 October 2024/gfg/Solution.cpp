#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        int minFreq = n/3+1;
        
        for(auto it:nums){
            mp[it]++;
            if(mp[it] == minFreq){
                ans.push_back(it);
            }
            if(ans.size() == 2) return ans;
        }
        if(ans.size() == 0) return {-1};
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

