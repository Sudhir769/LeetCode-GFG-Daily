#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>st;
        int n = q.size();
        
        int rem = n-k;
        
        while(k--){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(rem--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

