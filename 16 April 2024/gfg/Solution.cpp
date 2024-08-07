#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minimizeDifference(int n, int k, vector<int> &arr)
    {
        int rightmx[n];
        int rightmn[n];

        rightmx[n - 1] = rightmn[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rightmn[i] = min(rightmn[i + 1], arr[i]);
            rightmx[i] = max(rightmx[i + 1], arr[i]);
        }
        int i = 0, j = k - 1, mn = INT_MAX, mx = INT_MIN, ans = INT_MAX;
        while (j < n)
        {
            if (i != 0)
            {
                mn = min(arr[i - 1], mn);
                mx = max(arr[i - 1], mx);
            }
            int temp1 = mx, temp2 = mn;
            if (j != n - 1)
            {
                temp1 = max(mx, rightmx[j + 1]);
                temp2 = min(mn, rightmn[j + 1]);
            }
            ans = min(ans, abs(temp1 - temp2));
            i++, j++;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

