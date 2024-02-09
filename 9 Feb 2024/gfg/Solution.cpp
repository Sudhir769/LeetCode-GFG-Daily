#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    bool solve(Node *root)
    {
        if (root == NULL)
            return true;
        if (root->left == NULL and root->right == NULL)
            return true;

        bool l = solve(root->left);
        bool r = solve(root->right);

        int left = (root->left) ? (root->left->data) : 0;
        int right = (root->right) ? (root->right->data) : 0;

        return ((left + right == root->data) and (l and r));
    }

    int isSumProperty(Node *root)
    {
        return solve(root);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

