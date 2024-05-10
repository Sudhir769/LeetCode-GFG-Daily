#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int> temp, vector<int> &arr, int n, int k)
    {
        if (k == 0)
        {
            ans.push_back(temp);
            return;
        }
        if (i >= n or k < 0)
        {
            return;
        }

        for (int j = i; j < n; j++)
        {
            if (j > i and arr[j] == arr[j - 1])
                continue;
            temp.push_back(arr[j]);
            solve(j + 1, temp, arr, n, k - arr[j]);
            temp.pop_back();
        }
    }

    vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k)
    {
        vector<int> temp;
        sort(arr.begin(), arr.end());
        solve(0, temp, arr, n, k);
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
