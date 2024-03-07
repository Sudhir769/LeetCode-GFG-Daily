#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string longestSubstring(string s, int n)
    {
        string ans;
        int i = 0, j = 0;
        int curr = 0;

        while (i < n and j < n)
        {
            string str = s.substr(i, j - i + 1);
            if (s.find(str, j + 1) != string::npos)
            {
                int len = str.size();
                if (len > curr)
                {
                    curr = len;
                    ans = str;
                }
                j++;
            }
            else
            {
                i++;
            }
        }
        if (ans.empty())
        {
            return "-1";
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

