#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long pairAndSum(int n, long long arr[])
    {
        // int sum = 0;
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         sum += arr[i] & arr[j];
        //     }
        // }
        // return sum;

        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            long long k = 0;
            for (int j = 0; j < n; j++)
            {
                if ((arr[j] & (1 << i)) != 0)
                    k++;
            }
            ans += (1 << i) * ((k) * (k - 1)) / 2;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

