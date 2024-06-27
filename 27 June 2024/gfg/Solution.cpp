#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isToepliz(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();

        int dia = mat[0][0];
        for (int i = 1, j = 1; i < n and j < m; i++ and j++)
        {
            if (mat[i][j] != dia)
            {
                return false;
            }
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

