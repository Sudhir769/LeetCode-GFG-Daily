#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxOccured(int n, int l[], int r[], int maxx)
    {
        vector<int> arr(maxx + 2, 0);
        for (int i = 0; i < n; i++)
        {
            arr[l[i]] += 1;
            arr[r[i] + 1] -= 1;
        }

        int maxCnt = arr[0], res = 0;
        for (int i = 1; i <= maxx; i++)
        {
            arr[i] += arr[i - 1];
            if (arr[i] > maxCnt)
            {
                maxCnt = arr[i];
                res = i;
            }
        }
        return res;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

