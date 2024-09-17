#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(vector<int> &arr, int k)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = arr[n - 1] - arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < k)
                continue;

            int MIN = min(arr[0] + k, arr[i] - k);
            int MAX = max(arr[n - 1] - k, arr[i - 1] + k);

            ans = min(ans, MAX - MIN);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

