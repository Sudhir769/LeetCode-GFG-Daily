#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int result = 0;
        for(auto it:arr){
            result ^= it;
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

