#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> alternateSort(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n);

        sort(arr.begin(), arr.end());
        for (int i = 0, j = n - 1, k = 0; i <= j; i++, j--)
        {
            ans[k++] = arr[j];
            ans[k++] = arr[i];
        }

        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

