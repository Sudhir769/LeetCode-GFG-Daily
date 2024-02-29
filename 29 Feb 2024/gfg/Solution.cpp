#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long sumBitDifferences(int arr[], int n)
    {
        long long ans = 0;

        for (int i = 0; i < 32; i++)
        {
            long long cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if ((arr[j] & (1 << i)) != 0)
                {
                    cnt++;
                }
            }
            ans += (cnt * (n - cnt) * 2);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

