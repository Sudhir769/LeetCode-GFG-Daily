#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canSortArray(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    if (__builtin_popcount(nums[j]) == __builtin_popcount(nums[j + 1]))
                    {
                        swap(nums[j], nums[j + 1]);
                        flag = false;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if (flag)
                break;
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
