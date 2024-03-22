#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    vector<int> ans;
    void dfs(Node *root, int level)
    {
        if (root == NULL)
        {
            return;
        }
        if (ans.size() <= level)
        {
            ans.push_back(0);
        }

        ans[level] += root->data;

        dfs(root->right, level);
        dfs(root->left, level + 1);
    }

    vector<int> diagonalSum(Node *root)
    {
        ans.resize(1, 0);
        dfs(root, 0);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

