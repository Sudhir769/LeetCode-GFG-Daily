#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long int PowMod(long long int x, long long int n, long long int M)
    {
        long long int result = 1;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                result = (result * x) % M;
                n = n - 1;
            }
            else
            {
                x = (x * x) % M;
                n = n / 2;
            }
        }
        return result % M;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

