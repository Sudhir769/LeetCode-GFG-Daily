#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairsWithDiffK(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> mp;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(abs(arr[i] - k)) != mp.end())
            {
                cnt += mp[arr[i] - k];
            }
            if (mp.find(abs(arr[i] + k)) != mp.end())
            {
                cnt += mp[arr[i] + k];
            }
            mp[arr[i]]++;
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

