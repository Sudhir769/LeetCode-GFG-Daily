#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        int count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        int xCount = 0;
        int yCount = 0;
        
        for(auto it:arr){
            if(it == x) xCount++;
            if(it == y) yCount++;
            
            int diff = xCount - yCount;
            if(mp.find(diff) != mp.end()){
                count += mp[diff];
            }
            mp[diff]++;
        }
        return count;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

