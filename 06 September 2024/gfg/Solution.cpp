#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr)
    {
        int n = arr.size();
        int sum = 0, maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

