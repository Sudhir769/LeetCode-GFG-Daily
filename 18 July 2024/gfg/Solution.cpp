#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int alternatingMaxLength(vector<int>& arr) {
        int n = arr.size();
        if(n < 2) return n;
        
        int cb = 1;
        int bc = 1;
        
        for(int i=1; i<n; i++){
            if(arr[i] > arr[i-1]){
                cb = 1 + bc;
            }else if(arr[i] < arr[i-1]){
                bc = 1 + cb;
            }
        }
        return max(cb, bc);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

