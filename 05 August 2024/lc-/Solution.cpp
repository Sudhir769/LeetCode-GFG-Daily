#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> d;
        for (const auto &x : arr)
        {
            d[x]++;
        }

        string ans = "";
        int count = 0;
        for (const auto &x : arr)
        {
            if (d[x] == 1)
            {
                ans = x;
                count++;
            }

            if (count == k)
            {
                return ans;
            }
        }
        return "";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
