#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int minValue(string s, int k){
        int n = s.length();
        
        unordered_map<char, int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
        
        while(k--){
            int ele = pq.top(); pq.pop();
            ele--;
            if(ele > 0){
                pq.push(ele);
            }
        }
        int ans = 0;
        while(!pq.empty()){
            int val = pq.top(); pq.pop();
            ans += (val*val);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

