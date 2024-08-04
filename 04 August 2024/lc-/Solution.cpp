#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<int> subarrays;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                subarrays.push_back(sum);
            }
        }
        sort(subarrays.begin(), subarrays.end());
        int sum = 0;
        int mod = 1e9 + 7;
        for (int i = left - 1; i <= right - 1; i++)
        {
            sum = (sum + subarrays[i]) % mod;
        }
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
