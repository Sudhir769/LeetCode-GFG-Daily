#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size(), m = arr2.size();

        int sum1 = 0, i = 0, sum2 = 0, j = 0;
        int ans = 0;

        while (i < n and j < m)
        {
            if (arr1[i] < arr2[j])
            {
                sum1 += arr1[i++];
            }
            else if (arr2[j] < arr1[i])
            {
                sum2 += arr2[j++];
            }
            else
            {
                ans += (arr1[i] + max(sum1, sum2));
                i++, j++;
                sum1 = 0, sum2 = 0;
            }
        }
        while (i < n)
            sum1 += arr1[i++];
        while (j < m)
            sum2 += arr2[j++];
        ans += max(sum1, sum2);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

