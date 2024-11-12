#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int prevEnd = arr[0][1];
        
        for(int i=1; i<n; i++){
            if(prevEnd > arr[i][0]){
                return false;
            }
            prevEnd = arr[i][1];
        }
        return true;
    }
};


int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

