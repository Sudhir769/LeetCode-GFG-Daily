#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int maxRows = 0;
        for (auto currRow : matrix)
        {
            vector<int> inverted(n, 0);

            for (int col = 0; col < n; col++)
            {
                inverted[col] = !currRow[col];
            }
            int cnt = 0;
            for (auto &row : matrix)
            {
                if (row == currRow or row == inverted)
                {
                    cnt++;
                }
            }
            maxRows = max(maxRows, cnt);
        }
        return maxRows;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
