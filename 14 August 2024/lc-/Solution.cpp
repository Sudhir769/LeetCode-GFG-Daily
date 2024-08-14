#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestDistancePair(vector<int> &nums, int k)
    {
        int n = nums.size();

        int maxEl = *max_element(nums.begin(), nums.end());
        vector<int> cnt(maxEl + 1, 0);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int dist = abs(nums[i] - nums[j]);
                cnt[dist]++;
            }
        }
        for (int i = 0; i < maxEl; i++)
        {
            k -= cnt[i];
            if (k <= 0)
            {
                return i;
            }
        }
        return 0;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
