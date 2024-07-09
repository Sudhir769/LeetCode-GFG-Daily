#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int threeSumClosest(vector<int> arr, int target)
    {
        int n = arr.size();
        int ans = 1e7;

        sort(arr.begin(), arr.end());
        for (int i = 1; i < n - 1; i++)
        {
            int l = i - 1, r = i + 1;

            while (l >= 0 and r < n)
            {
                int sum = arr[l] + arr[r] + arr[i];

                if (abs(sum - target) < abs(ans - target))
                {
                    ans = sum;
                }
                else if (abs(sum - target) == abs(ans - target))
                {
                    ans = max(ans, sum);
                }

                if (sum > target)
                {
                    l--;
                }
                else
                {
                    r++;
                }
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

