#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int n = s.length();
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                cnt++;
                ans = max(ans, cnt);
            }
            else if (s[i] == ')')
            {
                cnt--;
            }
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
