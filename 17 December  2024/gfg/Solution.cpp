#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool placeCow(vector<int> &stalls, int dist, int cows)
    {
        int n = stalls.size();
        int cntCows = 1;
        int last = stalls[0];
        for (int i = 1; i < n; i++)
        {
            if (stalls[i] - last >= dist)
            {
                cntCows++;
                last = stalls[i];
            }
            if (cntCows >= cows)
                return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k)
    {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());

        int low = 1, high = stalls[n - 1] - stalls[0];

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (placeCow(stalls, mid, k))
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

