#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){};
};

class Solution
{
public:
    int result = 0;
    int solve(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int left = solve(root->left);
        int right = solve(root->right);

        result = max(result, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        solve(root);
        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
