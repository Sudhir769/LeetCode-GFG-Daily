#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long sumMatrix(long long n, long long q)
    {
        long long cnt = 0;
        long long maxNum = n + 1;
        if (q > 2 * n)
            return 0;
        if (q != n)
        {
            return (long long)(n - abs(maxNum - q));
        }
        return n - 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

