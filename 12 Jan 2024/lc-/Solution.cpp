#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int n = s.size()/2;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            if(st.count(s[i])){
                cnt1++;
            }
        }
        for(int i=n; i<2*n; i++){
            if(st.count(s[i])){
                cnt2++;
            }
        }
        return cnt1==cnt2;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
