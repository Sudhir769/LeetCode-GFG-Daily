#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size();
        vector<int>ans(n*n);
        int k = 0;
        bool check = false;
        for(int i=0; i<2*n-1; i++){
            for(int j=0; j<=i; j++){
                if(j<n and i-j<n){
                    if(check){
                        ans[k++] = (mat[j][i-j]);
                    }else{
                        ans[k++] = (mat[i-j][j]);
                    }
                }
            }
            check = !check;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

