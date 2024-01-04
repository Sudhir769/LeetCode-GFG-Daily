#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int singleElement(int arr[] ,int n) {
        
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto i:mp){
            if(i.second < 3){
                return i.first;
            }
        }
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

