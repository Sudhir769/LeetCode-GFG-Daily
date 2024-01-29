#include <bits/stdc++.h>
using namespace std;


class MyQueue {
public:
    queue<int>q;
    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
