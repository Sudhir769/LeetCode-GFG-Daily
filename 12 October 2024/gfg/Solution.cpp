#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pairWithMaxSum(vector<int> &arr)
    {
        if (arr.size() <= 1)
        {
            return -1;
        }
        int ans = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            ans = max(ans, arr[i] + arr[i + 1]);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

