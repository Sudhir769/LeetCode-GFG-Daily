#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isEularCircuitExist(int v, vector<int> adj[])
    {
        vector<int> ind(v, 0);

        for (int i = 0; i < v; i++)
        {
            for (auto it : adj[i])
            {
                ind[it]++;
            }
        }
        for (int j = 0; j < v; j++)
        {
            if (ind[j] % 2)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
