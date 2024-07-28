#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string removeDups(string str)
    {
        int n = str.size();

        set<char> st;
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (!st.count(str[i]))
            {
                ans.push_back(str[i]);
            }
            st.insert(str[i]);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

