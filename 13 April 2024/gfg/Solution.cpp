#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long reversedBits(long long x)
    {
        long long ans = 0;
        int i = 31;
        while (x)
        {
            if (x % 2 == 1)
                ans += pow(2, i);
            i--;
            x /= 2;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

