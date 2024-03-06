#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> search(string pattern, string text)
    {
        string temp = "";
        vector<int> ans;
        int i = 0;
        while (i < text.size())
        {
            temp += text[i];
            if (temp.size() < pattern.size())
            {
                i++;
            }
            else
            {
                if (temp == pattern)
                {
                    ans.push_back(i - pattern.size() + 2);
                }
                temp.erase(0, 1);
                i++;
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
