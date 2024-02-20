#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int m;
    vector<int>dp;
    unordered_set<string>st;
    bool solve(int ind, string &s){
        if(ind >= m){
            return 1;
        }
        if(dp[ind] != -1) return dp[ind];
        string str = "";
        bool ans = 0;
        for(int i=1; i<=m; i++){
            str = s.substr(ind, i);
            if(st.count(str) && solve(i+ind, s)){
                ans = 1;
            }
        }
        return dp[ind] = ans;
    }

    int wordBreak(int n, string s, vector<string> &dictionary) {
        m = s.length();
        dp.resize(m+1, -1);
        for(auto word:dictionary){
            st.insert(word);
        }
        return solve(0, s);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

