#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x)
    {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;
        while (low < n and high >= 0)
        {
            if (mat[low][high] == x)
            {
                return true;
            }
            else if (mat[low][high] < x)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return false;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

