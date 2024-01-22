#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_set<int>st;
        int curr = 0;
        for(int i=0; i<n; i++){
            if(st.find(nums[i]) == st.end()){
                st.insert(nums[i]);
            }else{
                ans.push_back(nums[i]);
            }
            curr += nums[i];
        }
        int sum = n*(n + 1)/2;
        int b = sum - curr + ans.back();
        ans.push_back(b);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
