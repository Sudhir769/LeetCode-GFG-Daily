#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subsetXORSum(vector<int> &nums)
    {
        int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result |= nums[i];
        }
        return (result << (n - 1));
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
