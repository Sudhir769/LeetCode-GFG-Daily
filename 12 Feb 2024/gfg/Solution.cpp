#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mod = 1e9 + 7;
    long long sequence(int n)
    {
        long long ans = 0;
        int p = 1;
        for (int i = 1; i <= n; i++)
        {
            long long val = 1;
            for (int j = 0; j < i; j++)
            {
                val = (val * (p++)) % mod;
            }
            ans = (ans + val) % mod;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

