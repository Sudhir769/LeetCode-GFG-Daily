#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int steps = 0;
    int solve(TreeNode *root)
    {
        if (!root)
            return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        steps += abs(left) + abs(right);
        return (root->val - 1) + left + right;
    }
    int distributeCoins(TreeNode *root)
    {
        solve(root);
        return steps;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
