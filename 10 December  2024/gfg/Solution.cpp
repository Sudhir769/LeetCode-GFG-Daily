#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end());
        int cnt = 0;
        
        for(int i=intervals.size()-1; i>0; i--){
            if(intervals[i][0] < intervals[i-1][1]){
                cnt++;
                intervals.erase(intervals.begin()+i-1);
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

