#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr)
    {
        int n = arr.size();

        int suff = 1;
        int pref = 1;

        int maxProd = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (suff == 0)
                suff = 1;
            if (pref == 0)
                pref = 1;

            pref *= arr[i];
            suff *= arr[n - i - 1];

            maxProd = max({maxProd, pref, suff});
        }
        return maxProd;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

