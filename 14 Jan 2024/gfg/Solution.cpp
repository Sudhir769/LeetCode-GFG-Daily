#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        vector<int> ans;
        map<vector<int>, int>mp;
        int cnt = 0;
        for(auto &i: matrix){
            if(mp.find(i) == mp.end()){
                mp[i] = cnt+1;
            }else{
                ans.push_back(cnt);
            }
            cnt++;
        }
        return ans;
    } 
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

