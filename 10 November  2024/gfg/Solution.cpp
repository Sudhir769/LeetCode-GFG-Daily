#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        vector<int> ans;

        int i, j;
        for (i = 0, j = 0; i < a.size() and j < b.size();)
        {
            if (a[i] == b[j])
            {
                ans.push_back(a[i]);
                i++, j++;
            }
            else if (a[i] < b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while (i < a.size())
        {
            ans.push_back(a[i]);
            i++;
        }

        while (j < b.size())
        {
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

