#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string removeKdigits(string s, int k) {
        pair<int,int>last = {0, k};
        int n = s.size();
        int index = 0;
        
        while(index < n){
            if(s[index] != '0'){
                if(k) k--;
                else break;
                
                index++;
            }else{
                while(index < n and s[index] == '0'){
                    index++;
                }
                last = {index, k};
            }
        }
        stack<int>st;
        int start = last.first;
        k = last.second;
        
        for(int i=start; i<n; i++){
            while(!st.empty() and st.top() > s[i]-'0' and k){
                k--;
                st.pop();
            }
            st.push(s[i]-'0');
        }
        
        while(!st.empty() and k--){
            st.pop();
        }
        
        string ans = "";
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        if(ans == "") ans = "0";
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

