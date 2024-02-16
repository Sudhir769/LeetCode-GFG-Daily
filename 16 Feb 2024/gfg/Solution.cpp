#include <bits/stdc++.h>
using namespace std;


Node * prev = NULL;
    Node *flattenBST(Node *root)
    {
        if(!root) return NULL;
        flattenBST(root->right);
        root->right = prev;
        
        prev = root;
        flattenBST(root->left);
        root->left = NULL;
        
        return prev;
    }

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

