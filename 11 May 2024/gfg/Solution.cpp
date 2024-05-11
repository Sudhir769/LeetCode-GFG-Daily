#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> jugglerSequence(long long n)
    {
        vector<long long> ans;
        ans.push_back(n);

        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = pow(n, .5);
            }
            else
            {
                n = pow(n, 1.5);
            }
            ans.push_back(n);
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
