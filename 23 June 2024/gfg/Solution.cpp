#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> bracketNumbers(string s)
    {
        int n = s.length();
        vector<int> ans;

        int openCnt = 0;
        stack<pair<char, int>> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                openCnt++;
                ans.push_back(openCnt);
                st.push({'(', openCnt});
            }
            else if (s[i] == ')')
            {
                int closeCnt = st.top().second;
                ans.push_back(closeCnt);
                st.pop();
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

