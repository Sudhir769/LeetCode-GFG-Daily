#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        ans.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            auto curr = arr[i];
            if (ans.back()[1] >= curr[0])
            {
                ans.back()[1] = max(ans.back()[1], curr[1]);
            }
            else
            {
                ans.push_back(curr);
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

