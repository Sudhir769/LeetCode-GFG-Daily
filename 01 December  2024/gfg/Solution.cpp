#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s)
    {

        vector<int> freq(26, 0);
        for (char ch : s)
        {
            freq[ch - 'a']++;
        }

        for (char ch : s)
        {
            if (freq[ch - 'a'] == 1)
            {
                return ch;
            }
        }
        return '$';
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

