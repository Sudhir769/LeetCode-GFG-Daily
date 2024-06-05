#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int s1 = 0, s2 = 0, target = 0, val = 0;
        unordered_map<int, bool>mp;
        for(int i=0; i<n; i++){
            s1 += a[i];
            mp[a[i]] = true;
        }
        for(int i=0; i<m; i++){
            s2 += b[i];
        }
        if((s1-s2) % 2 != 0){
            return -1;
        }
        target = (s1-s2)/2;
        for(int i=0; i<m; i++){
            if(mp[b[i] + target] == true){
                return 1;
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

