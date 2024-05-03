#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution {
public:
    vector<int>ans;
    void bfs(Node* root, int k){
        if(root){
            if(k == 0){
                ans.push_back(root->data);
            }
            bfs(root->left, k-1);
            bfs(root->right, k-1);
        }
    }
    
    vector<int> Kdistance(struct Node *root, int k)
    {
        bfs(root, k);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

