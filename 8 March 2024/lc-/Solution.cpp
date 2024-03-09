#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int maxi = 0;
        int cnt = 0;
        for (auto it : nums)
        {
            mp[it]++;
            maxi = max(maxi, mp[it]);
        }
        for (auto i : mp)
        {
            if (i.second == maxi)
            {
                cnt += maxi;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
