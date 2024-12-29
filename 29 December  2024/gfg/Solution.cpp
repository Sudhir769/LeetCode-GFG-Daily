#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        vector<int> result;
        unordered_set<int> st(a.begin(), a.end());
        
        for(num:b){
            if(st.count(num)) result.push_back(num);
            st.erase(num);
        }
        sort(result.begin(), result.end());
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

