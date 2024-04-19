#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> findMissing(int a[], int b[], int n, int m)
    {
        vector<int> ans;
        unordered_set<int> st(b, b + m);

        for (int i = 0; i < n; i++)
        {
            if (st.find(a[i]) == st.end())
            {
                ans.push_back(a[i]);
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

