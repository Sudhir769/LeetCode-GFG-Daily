#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length();
        int j = n - 1;
        while (s[j] == ' ')
        {
            j--;
        }
        int i = j;
        while (i >= 0 and s[i] != ' ')
        {
            i--;
        }
        return j - i;
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
