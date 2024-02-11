#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> recamanSequence(int n)
    {
        vector<int> ans = {0};
        unordered_set<int> st;

        for (int i = 1; i < n; i++)
        {
            int add = ans.back() + i;
            int sub = ans.back() - i;

            if (sub > 0 and st.find(sub) == st.end())
            {
                ans.push_back(sub);
                st.insert(sub);
            }
            else
            {
                ans.push_back(add);
                st.insert(add);
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

