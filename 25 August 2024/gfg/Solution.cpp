#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long bs(int target, vector<int> &arr)
    {
        long long start = 0, end = arr.size() - 1, ans = -1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (arr[mid] <= target)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
    long long countPairs(vector<int> &arr, vector<int> &brr)
    {
        int n = arr.size();
        int m = brr.size();

        long long one = 0, two = 0, threeFour = 0, ans = 0;
        sort(brr.begin(), brr.end());

        for (auto x : brr)
        {
            if (x == 1)
                one++;
            else if (x == 2)
                two++;
            else if (x == 3 or x == 4)
                threeFour++;
        }

        for (auto x : arr)
        {
            if (x != 1)
            {
                ans += one;
                if (x == 2)
                    ans -= threeFour;
                if (x == 3)
                    ans += two;
                int index = bs(x, brr);
                ans += (brr.size() - index - 1);
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

