#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }else{
                if(!st.empty() and st.top() == '(') st.pop();
                else st.push(s[i]);
            }
        }
        return st.size();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
