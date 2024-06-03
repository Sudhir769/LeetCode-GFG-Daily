#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mod = 1e9 + 7;
    int numberOfConsecutiveOnes(int n)
    {
        int a = 1, b = 1;
        int ans = 1;
        if (n == 1 || n == 2)
        {
            return 1;
        }
        for (int i = 3; i <= n; i++)
        {
            int c = (a + b) % mod;
            a = b;
            b = c;

            ans = ((ans * 2) % mod + a) % mod;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

