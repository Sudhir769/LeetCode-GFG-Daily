#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;
    int cnt;
    int n;
    bool checkPalindrome(int i, int j, string &s)
    {
        if (i > j)
            return true;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s[i] == s[j])
        {
            return dp[i][j] = checkPalindrome(i + 1, j - 1, s);
        }
        return dp[i][j] = false;
    }
    void check(int i, int j, string &s)
    {
        while (i >= 0 and j < n and s[i] == s[j])
        {
            cnt++;
            i--, j++;
        }
    }

    int countSubstrings(string s)
    {
        n = s.size();
        cnt = 0;

        // Approach-1
        //  dp.resize(n+1, vector<int>(n+1, -1));
        //  for(int i=0; i<n; i++){
        //      for(int j=i; j<n; j++){
        //          if(checkPalindrome(i, j, s)){
        //              cnt++;
        //          }
        //      }
        //  }

        // Approach-2
        //  for(int i=0; i<n; i++){
        //      check(i, i, s);
        //      check(i, i+1, s);
        //  }

        // Approach-3
        dp.resize(n + 1, vector<int>(n + 1, 0));
        for (int l = 1; l <= n; l++)
        {
            for (int i = 0; i + l - 1 < n; i++)
            {
                int j = i + l - 1;
                if (i == j)
                {
                    dp[i][i] = 1;
                }
                else if (i + 1 == j)
                {
                    dp[i][j] = (s[i] == s[j]);
                }
                else
                {
                    dp[i][j] = (s[i] == s[j] and dp[i + 1][j - 1]);
                }
                cnt += dp[i][j];
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
