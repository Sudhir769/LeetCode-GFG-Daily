#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumSubstrings(string s)
    {
        int n = s.length();
        int mod = 1e9 + 7;

        // long long sum = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         sum = (sum + stoi(s.substr(i, j-i+1)))%mod;
        //     }
        // }
        // return sum;

        vector<long long> dp(n, 0);
        dp[0] = s[0] - '0';
        long long ans = dp[0];
        for (int i = 1; i < n; i++)
        {
            dp[i] = ((dp[i - 1] * 10) % mod + ((s[i] - '0') * (i + 1)) % mod) % mod;
            ans = (ans + dp[i]) % mod;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
