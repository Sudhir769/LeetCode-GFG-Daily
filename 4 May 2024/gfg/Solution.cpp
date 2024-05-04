#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution {
public:
    Node *buildTree(int in[], int post[], int n)
    {
        if (n == 0)
            return NULL;

        int rootIndex = 0;
        while (rootIndex < n and in[rootIndex] != post[n - 1])
        {
            rootIndex++;
        }
        Node *root = new Node(post[n - 1]);

        root->left = buildTree(in, post, rootIndex);
        root->right = buildTree(in + rootIndex + 1, post + rootIndex, n - rootIndex - 1);

        return root;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

