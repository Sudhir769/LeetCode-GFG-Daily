#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkDuplicatesWithinK(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) != mp.end())
            {
                if (i - mp[arr[i]] <= k)
                {
                    return 1;
                }
            }
            mp[arr[i]] = i;
        }
        return false;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

