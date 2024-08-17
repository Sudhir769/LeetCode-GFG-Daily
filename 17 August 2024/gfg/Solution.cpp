#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums)
    {

        int n = nums.size();
        long long int prod = 1;
        int isZero = 0, index = -1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                isZero++;
                index = i;
            }
            else
            {
                prod = (prod * nums[i]);
            }
        }

        vector<long long int> ans(n, 0);
        if (isZero > 1)
        {
            return ans;
        }
        else if (isZero == 1)
        {
            ans[index] = prod;
            return ans;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] = (prod / nums[i]);
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

