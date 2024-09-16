#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    
    int maxLength(string& str) {
        int n = str.length();
        
        stack<int> st;
        st.push(-1);
        int maxi = 0;
        
        for(int i=0; i<n; i++){
            char ch = str[i];
            
            if(ch == '('){
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()) maxi = max(maxi, i - st.top());
                else st.push(i);
            }
        }
        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

