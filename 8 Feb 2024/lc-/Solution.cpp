#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSquares(int n)
    {
        // padding ahead
        static vector<int> dp = {0};

        while (dp.size() <= n)
        {
            int i = dp.size();
            int count = INT_MAX;
            for (int j = 1; j * j <= i; ++j)
            {
                count = min(count, dp[i - j * j] + 1);
            }
            dp.push_back(count);
        }
        return dp[n];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
