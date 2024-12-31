#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int> &arr)
    {
        int n = arr.size();
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        int ans = 1;
        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end())
                {
                    x++;
                    cnt++;
                }
                ans = max(ans, cnt);
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

