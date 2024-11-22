#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxEl = 0;
        int maxProfit = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            maxEl = max(maxEl, prices[i]);
            maxProfit = max(maxProfit, maxEl - prices[i]);
        }
        return maxProfit;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

