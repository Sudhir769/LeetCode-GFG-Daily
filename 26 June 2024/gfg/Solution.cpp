#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findCoverage(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {

                    for (auto dir : directions)
                    {
                        int nrow = i + dir[0];
                        int ncol = j + dir[1];

                        if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m)
                        {
                            sum += matrix[nrow][ncol];
                        }
                    }
                }
            }
        }
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

