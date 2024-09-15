#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
    bool isVowel(char ch)
    {
        return st.count(ch);
    }
    int findTheLongestSubstring(string s)
    {
        int n = s.length();

        unordered_map<int, int> mp;
        int mask = 0;
        int result = 0;

        mp[mask] = -1;

        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]))
                mask = (mask ^ (1 << (s[i] - 'a')));

            if (mp.find(mask) != mp.end())
            {
                result = max(result, i - mp[mask]);
            }
            else
            {
                mp[mask] = i;
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
