#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthMissing(vector<int> &arr, int k)
    {
        int n = arr.size();

        int last = 0;
        int curr = 0;
        int i = 0;
        while (i < n)
        {
            if (k > arr[i] - last - 1)
            {
                k -= (arr[i] - last - 1);
            }
            else
            {
                return last + k;
            }
            last = arr[i];
            i++;
        }
        return arr[n - 1] + k;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

