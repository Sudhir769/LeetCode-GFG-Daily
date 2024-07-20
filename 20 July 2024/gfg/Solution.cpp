#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};


// Return the root of the modified tree after removing all the half nodes.
class Solution
{
public:
    Node *solve(Node *root)
    {
        if (root == NULL)
            return NULL;

        root->left = solve(root->left);
        root->right = solve(root->right);

        if (root->left == NULL and root->right)
        {
            return root->right;
        }
        if (root->right == NULL and root->left)
        {
            return root->left;
        }

        return root;
    }
    Node *RemoveHalfNodes(Node *root)
    {
        return solve(root);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

