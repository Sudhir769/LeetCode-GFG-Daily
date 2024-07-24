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
class Solution
{
public:
    // Function to check whether a Binary Tree is BST or not.

    bool solve(Node *root, int min, int max)
    {
        if (root == NULL)
            return true;

        if (root->data > min and root->data < max)
        {
            bool left = solve(root->left, min, root->data);
            bool right = solve(root->right, root->data, max);

            return left and right;
        }
        return false;
    }

    bool isBST(Node *root)
    {
        return solve(root, INT_MIN, INT_MAX);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

