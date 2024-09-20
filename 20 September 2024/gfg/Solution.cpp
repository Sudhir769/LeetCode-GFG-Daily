#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int leftMax = INT_MIN;
        int cnt = 0;
        
        for(auto it:height){
            if(it > leftMax){
                cnt++;
                leftMax = it;
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

