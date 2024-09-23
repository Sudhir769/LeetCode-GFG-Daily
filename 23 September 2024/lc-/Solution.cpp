#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minExtraChar(string s, vector<string> &dictionary)
    {
        int n = s.length();
        unordered_set<string> st(dictionary.begin(), dictionary.end());

        vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            dp[i] = 1 + dp[i + 1];

            for (int j = i; j < n; j++)
            {
                string str = s.substr(i, j - i + 1);
                if (st.count(str))
                {
                    dp[i] = min(dp[i], dp[j + 1]);
                }
            }
        }
        return dp[0];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
