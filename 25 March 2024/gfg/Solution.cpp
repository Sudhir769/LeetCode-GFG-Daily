#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<string> ans;
    void solve(int one, int zero, string s, int n)
    {
        if (one < zero)
        {
            return;
        }
        if (s.size() == n)
        {
            ans.push_back(s);
            return;
        }

        solve(one + 1, zero, s + '1', n);
        solve(one, zero + 1, s + '0', n);
    }
    vector<string> NBitBinary(int n)
    {
        solve(1, 0, "1", n);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

