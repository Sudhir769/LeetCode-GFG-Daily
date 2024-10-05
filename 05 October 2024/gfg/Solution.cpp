#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long ans = 1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > ans) return ans;
            ans += arr[i];
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

