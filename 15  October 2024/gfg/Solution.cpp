#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int> &arr, int tar)
    {
        int n = arr.size();
        unordered_map<int, int> mp;

        int sum = 0;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == tar)
                result++;

            if (mp.find(sum - tar) != mp.end())
            {
                result += mp[sum - tar];
            }

            mp[sum]++;
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

