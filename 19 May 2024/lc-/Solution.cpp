#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumValueSum(vector<int> &nums, int k, vector<vector<int>> &edges)
    {
        long long sum = 0;
        int cnt = 0;
        int minLoss = INT_MAX;

        for (long long num : nums)
        {
            if ((num ^ k) > num)
            {
                sum += num ^ k;
                cnt++;
            }
            else
            {
                sum += num;
            }
            minLoss = min((long long)minLoss, abs(num - (num ^ k)));
        }
        if (cnt % 2 == 0)
        {
            return sum;
        }
        return sum - minLoss;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
