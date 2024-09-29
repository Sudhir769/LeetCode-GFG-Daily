#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalCount(int k, vector<int> &arr)
    {
        int n = arr.size();

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (arr[i] / k);
            cnt += (arr[i] % k > 0 ? 1 : 0);
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

