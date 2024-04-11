#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int grayToBinary(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans ^= n;
            n >>= 1;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
