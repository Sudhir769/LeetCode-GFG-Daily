#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr)
    {
        vector<int> ans;
        int n = arr.size();

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0 and arr[i] == arr[i + 1])
            {
                arr[i] = 2 * arr[i];
                arr[i + 1] = 0;
            }

            if (arr[j] == 0 and arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
            if (arr[j] != 0)
                j++;
        }

        return arr;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

