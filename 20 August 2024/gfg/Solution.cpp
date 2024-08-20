#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }    
};

class Solution
{
public:
    unordered_map<Node *, Node *> par;
    unordered_map<Node *, bool> vis;
    Node *tar = NULL;

    void dfs1(Node *root, int target)
    {
        if (root == NULL)
            return;

        if (root->data == target)
        {
            tar = root;
        }

        if (root->left != NULL)
        {
            par[root->left] = root;
        }
        if (root->right != NULL)
        {
            par[root->right] = root;
        }

        dfs1(root->left, target);
        dfs1(root->right, target);
    }

    int dfs2(Node *from)
    {
        if (from == NULL)
            return 0;

        int left = 0, right = 0, parent = 0;
        vis[from] = true;
        if (vis.find(from->left) == vis.end())
        {
            left = dfs2(from->left);
        }
        if (vis.find(from->right) == vis.end())
        {
            right = dfs2(from->right);
        }
        if (par.find(from) != par.end() and vis.find(par[from]) == vis.end())
        {
            parent = dfs2(par[from]);
        }
        return 1 + max({left, right, parent});
    }

    int minTime(Node *root, int target)
    {
        dfs1(root, target);
        return dfs2(tar) - 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

