#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

class Solution {
public:
    bool solve(Node *root, int target, vector<int> &ans)
    {
        if (root == NULL)
        {
            return false;
        }
        if (root->data == target)
        {
            return true;
        }

        if (solve(root->left, target, ans) or solve(root->right, target, ans))
        {
            ans.push_back(root->data);
        }
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int> ans;
        solve(root, target, ans);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

