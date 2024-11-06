#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    int result = 0;
    void bfs(Node *root, int curr)
    {
        if (root == NULL)
            return;

        curr = curr * 10 + root->data;

        if (root->left == NULL and root->right == NULL)
        {
            result += curr;
            return;
        }

        bfs(root->left, curr);
        bfs(root->right, curr);
    }

    int treePathsSum(Node *root)
    {
        bfs(root, 0);
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

