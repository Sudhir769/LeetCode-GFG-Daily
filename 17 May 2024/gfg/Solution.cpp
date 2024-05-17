#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findPair(int n, int x, vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int left = 0, right = 1;

        while (left < n and right < n)
        {
            int diff = arr[right] - arr[left];
            if (diff == x and left != right)
            {
                return 1;
            }

            if (diff < x)
            {
                right++;
            }
            else
            {
                left++;
            }
        }
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

