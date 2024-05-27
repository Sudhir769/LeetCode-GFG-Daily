#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int solve(int n, vector<int> &a, int prev, int i)
    {
        if (i >= n)
        {
            return 0;
        }
        if (prev == -1)
        {
            return max(1 + solve(n, a, i, i + 1), 0 + solve(n, a, prev, i + 1));
        }

        int ans = 0, ans2 = 0;
        if (abs(a[prev] - a[i]) == 1)
        {
            ans = 1 + solve(n, a, i, i + 1);
        }

        ans2 = 0 + solve(n, a, prev, i + 1);

        return max(ans, ans2);
    }
    int longestSubseq(int n, vector<int> &a)
    {

        return solve(n, a, -1, 0);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

