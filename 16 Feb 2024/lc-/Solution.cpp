#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto it:mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size();i++){
            int freq = v[i].first;
            int num = v[i].second;

            if(k >= freq){
                k-=freq;
                freq = 0;
                v[i] = {freq, num};
            }else{
                freq-=k;
                v[i] = {freq, num};
                break;
            }
        }
        int cnt = 0;
        for(auto it:v){
            if(it.first != 0){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
