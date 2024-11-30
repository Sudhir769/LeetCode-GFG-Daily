#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string &s1, string &s2)
    {
        vector<int> freq(26, 0);
        for (char ch : s1)
        {
            freq[ch - 'a']++;
        }

        for (char ch : s2)
        {
            freq[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] < 0 or freq[i] > 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

