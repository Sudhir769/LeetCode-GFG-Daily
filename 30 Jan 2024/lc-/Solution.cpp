#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    set<string>s = {"+", "-", "/", "*"};
    bool isOperator(string &str){
        return s.count(str);
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(auto &i:tokens){
            if(isOperator(i)){
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();

                if(i=="+"){
                    st.push(op1+op2);
                }else if(i=="-"){
                    st.push(op2-op1);
                }else if(i=="/"){
                    st.push(op2/op1);
                }else{
                    st.push(op2*op1);
                }
            }else{
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
