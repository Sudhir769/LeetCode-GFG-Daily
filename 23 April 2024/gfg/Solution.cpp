#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mod = 1e9 + 7;
    int firstElement(int n)
    {

        if (n <= 2)
            return 1;
        int a = 1;
        int b = 1;
        int c = 0;
        for (int i = 2; i < n; i++)
        {
            c = ((a) % mod + (b) % mod) % mod;
            a = b;
            b = c;
        }
        return c;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

