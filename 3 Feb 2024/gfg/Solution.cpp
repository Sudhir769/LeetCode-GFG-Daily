#include <bits/stdc++.h>
using namespace std;

struct Node
{
    bool data;   
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class Solution
{
    public:
        long long MOD = 1e9+7;
        void solve(Node* node, long long &ans, long long &power){
            if(!node) return;
            
            solve(node->next, ans, power);
            
            if(node->data){
                ans = (ans + power) % MOD;
            }
            power = (power * 2LL) % MOD;
        }
        
        long long unsigned int decimalValue(Node *head)
        {
            long long ans = 0, power = 1;
            solve(head, ans, power);
            return ans;
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

