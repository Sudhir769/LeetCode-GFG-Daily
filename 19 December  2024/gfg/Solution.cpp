#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> result;
        
        int top = 0, bottom = n-1;
        int left = 0, right = m-1;
        
        while(top <= bottom and left <= right){
            for(int i=top; i<= right; i++){
                result.push_back(mat[top][i]);
            }
            top++;
            
            for(int j=top; j<=bottom; j++){
                result.push_back(mat[j][right]);
            }
            right--;
            
            if(top <= bottom){
                for(int i=right; i>=left; i--){
                    result.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            
            if(left <= right){
                for(int j=bottom; j>=top; j--){
                    result.push_back(mat[j][left]);
                }
                left++;
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

