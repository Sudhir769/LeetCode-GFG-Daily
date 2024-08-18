#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canSplit(vector<int> &arr)
    {
        int n = arr.size();

        int sum = accumulate(arr.begin(), arr.end(), 0);
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr * 2 == sum)
            {
                return true;
            }
            curr += arr[i];
        }
        return false;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

