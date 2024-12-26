#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(int i, vector<int> &nums, int target)
    {
        if (i >= nums.size())
            return target == 0;
        return solve(i + 1, nums, target - nums[i]) + solve(i + 1, nums, target + nums[i]);
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        return solve(0, nums, target);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
