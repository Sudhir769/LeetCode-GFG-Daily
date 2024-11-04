#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findTriplets(vector<int> &arr)
    {
        int n = arr.size();
        vector<vector<int>> ans;

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]].push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = -(arr[i] + arr[j]);

                if (mp.find(sum) != mp.end())
                {
                    for (auto x : mp[sum])
                    {
                        if (x != i and x != j and i < j and j < x)
                        {
                            ans.push_back({i, j, x});
                        }
                    }
                }
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

