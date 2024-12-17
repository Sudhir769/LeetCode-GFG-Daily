#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findChampion(int n, vector<vector<int>> &edges)
    {
        vector<int> indegree(n, 0);

        for (auto edge : edges)
        {
            indegree[edge[1]]++;
        }

        int champ = -1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                champ = i;
                cnt++;
                if (cnt > 1)
                    return -1;
            }
        }
        return champ;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}