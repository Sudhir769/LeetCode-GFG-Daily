#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        int a=0, b=n-1;
        
        while(a < b){
            if(mat[a][b]) a++;
            else b--;
        }
        for(int i=0; i<n; i++){
            if(i == a) continue;
            if(!mat[i][a] or mat[a][i]){
                return -1;
            }
        }
        return a;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

