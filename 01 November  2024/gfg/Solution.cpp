#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxSum(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int i = 0, j = n - 1;
        long long sum = 0;

        for (; i < j; i++, j--)
        {
            int val = arr[j] - arr[i] + arr[j] - arr[i + 1];
            sum += val;
        }
        sum += arr[i] - arr[0];
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

