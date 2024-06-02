#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        int n = queries.size();
        vector<int>ans;
        int XOR = 0;
        for(int i=n-1; i>=0; i--){
            if(queries[i][0] == 0){
                ans.push_back(queries[i][1]^XOR);
            }else{
                XOR ^= queries[i][1];
            }
        }
        ans.push_back(XOR);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

