#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();

        int MIN = arrays[0].front();
        int MAX = arrays[0].back();
        int result = 0;
        
        for(int i=1; i<n; i++){
            int currMin = arrays[i].front();
            int currMax = arrays[i].back();

            result = max({result, abs(currMax - MIN), abs(MAX - currMin)});
            MIN = min(currMin, MIN);
            MAX = max(currMax, MAX);
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
