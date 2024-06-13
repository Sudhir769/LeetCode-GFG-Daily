#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int padovanSequence(int n)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 1, dp[1] = 1, dp[2] = 1;
        const int mod = 1e9 + 7;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = (dp[i - 2] + dp[i - 3]) % (mod);
        }
        return (dp[n] % (mod));
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

