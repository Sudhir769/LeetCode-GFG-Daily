#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ele = 0, cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                ele = nums[i];
            }
            else if (nums[i] == ele)
            {
                cnt++;
            }
            else if (nums[i] != ele)
            {
                cnt--;
            }
        }
        return ele;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
