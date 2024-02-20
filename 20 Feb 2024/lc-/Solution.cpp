#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int i;
        for(i=0; i<n; i++){
            if(nums[i] != i){
                return i;
            }
        }
        return i;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
