#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int>winners;
        map<int, int>loosers;

        for(auto &i:matches){
            winners[i[0]]++;
            loosers[i[1]]++;
        }

        vector<vector<int>>ans(2);
        for(auto i:winners){
            if(loosers.find(i.first) == loosers.end()){
                ans[0].push_back(i.first);
            }
        }
        for(auto i:loosers){
            if(i.second == 1){
                ans[1].push_back(i.first);
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
