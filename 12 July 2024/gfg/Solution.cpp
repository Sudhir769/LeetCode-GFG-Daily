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
    bool hasPathSum(Node *root, int target)
    {
        if (!root)
            return false;
        target -= root->data;

        if (!root->left and !root->right)
        {
            return target == 0;
        }

        bool left = hasPathSum(root->left, target);
        bool right = hasPathSum(root->right, target);

        return left or right;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

