#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        int result = 0;

        for(auto i:mp){
            int a = i.second;
            if(a == 1) return -1;
            result += ceil((double)a/3); 
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
