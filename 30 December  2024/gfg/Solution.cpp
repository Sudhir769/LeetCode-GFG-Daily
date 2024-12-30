#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int> &a, vector<int> &b)
    {
        unordered_set<int> st(a.begin(), a.end());
        for (auto num : b)
        {
            st.insert(num);
        }
        return st.size();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

