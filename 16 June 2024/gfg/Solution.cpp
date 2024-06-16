#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    vector<int> getPrimes(int n)
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (isPrime(i))
            {
                int s2 = n - i;
                if (isPrime(s2))
                {
                    return {i, s2};
                }
            }
        }
        return {-1, -1};
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

