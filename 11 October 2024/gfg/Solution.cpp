#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrange(const vector<int> &arr)
    {

        vector<int> ans(arr.size(), -1);
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != -1)
            {
                ans[arr[i]] = arr[i];
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

