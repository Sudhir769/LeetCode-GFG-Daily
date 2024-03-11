#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        int cnt = 0;
        int p = n - 1, q = n - 1;
        int i = 0, j = 0;

        while (i < n and p >= 0)
        {
            int sum = mat1[i][j] + mat2[p][q];

            if (sum == x)
            {
                cnt++;
                j++, q--;
            }
            else if (sum > x)
            {
                q--;
            }
            else
            {
                j++;
            }

            if (q < 0)
            {
                q = n - 1;
                p--;
            }
            if (j == n)
            {
                j = 0;
                i++;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

