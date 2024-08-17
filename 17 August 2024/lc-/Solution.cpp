#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        int m = points[0].size();

        vector<long long> prev(m, 0);
        for (int i = 0; i < m; i++)
            prev[i] = points[0][i];
        for (int i = 1; i < n; i++)
        {

            vector<long long> left(m, 0), right(m, 0);
            vector<long long> curr(m, 0);

            left[0] = prev[0];
            right[m - 1] = prev[m - 1];

            for (int j = 1; j < m; j++)
            {
                left[j] = max(prev[j], left[j - 1] - 1);
                right[m - j - 1] = max(prev[m - j - 1], right[m - j] - 1);
            }

            for (int j = 0; j < m; j++)
            {
                curr[j] = max(left[j], right[j]) + points[i][j];
            }
            prev = curr;
        }
        return *max_element(prev.begin(), prev.end());
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
